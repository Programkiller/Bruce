//Wangzongze    2016/3/11
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include <ctime>
#include <cstdlib>
using namespace std;
void repeate()
{
    int d,e,k,m,n, p;
    int o=0,b=0;
    cout<<"请您输入需要产生的题目个数"<<endl;
    cin>>k;
    cout<<endl;
    int character[200][4];
    char operators[4]={'+','-','*','/'};
    char fuhao[16][2]={{'+','+'},{'+','-'},{'+','*'},{'+','/'},{'-','+'},{'-','-'},{'-','*'},{'-','/'},{'*','+'},{'*','-'},{'*','*'},{'*','/'},{'/','+'},{'/','-'},{'/','*'},{'/','/'}};
    int g[100];    
    srand(time(0));                                  //设置随机函数
    int r,t,temp;
    cout<<"输入操作数的范围"<<endl;
    cin>>r>>t;
    cout<<endl;
    if(r>t)
    {
        temp=r;
        r=t;
        t=temp;
    }
    int a;
     cout<<"选择操作（有乘法：1，无乘法：0）"<<endl;
    cin>>a;
    cout<<endl;
    if(a!=0)
    {
       cout<<"选择操作（有余数：1，无余数：0）"<<endl;
        cin>>p;
        cout<<endl;
    }
    cout<<"选择操作（有分数：1，无分数：0）"<<endl;
    int s;
    cin>>s;
    cout<<endl;
    for(int i=0;i<k;i++)
    {
        character[i][0]=rand()%(t-r)+r;                                 //取区间[0,100)的整数
        character[i][1]=rand()%(t-r)+r;
        character[i][2]=rand()%(t-r)+r;
        character[i][3]=rand()%(t-r-1)+r+1;
        d=rand()%100;
        e=rand()%100;
        if(a==1||a==0) 
        {
            switch(a)
            {
            case 0:
                n=e%2;
                m=d%2;
                break;
            case 1:
                n=e%4;
                m=d%4;
                break;
/******************生成判断运算符的随机数******************/
            }
        }
        else
        {
            cout<<"输入选项有误，请正确输入。"<<endl;
            cout<<"0.无乘除法。"<<endl;
            cout<<"1.有乘除法。"<<endl;
            cout<<"请输入选项(0或1)"<<endl;
            cin>>a;
            i=i-1;
            continue;
        }
        
               
        if((m==3&&character[i][0]%character[i][1]!=0&&p==0)||(n==3&&character[i][1]%character[i][2]!=0&&p==0))
        {
            i=i-1;
        }
        else
        {
            if((character[i][1]==0&&m==3&&a==0)||(character[i][2]==0&&n==3&&a==0))
            {
                i=i-1;
            }
            else
            {
                for(int l=0;l<16;l++)
                {
                    if(operators[m]==fuhao[l][0]&&operators[n]==fuhao[l][1])
                    {
                        
                        g[o]=l;
                        o++;
                    }
                }
                for(int j=i-1;j>=0;j--)
                {
                    if(character[i][0]==character[j][0]&&character[i][1]==character[j][1]&&character[i][2]==character[j][2]&&g[i]==g[j])
                    {
                        i=i-1;
                        break;
                    }
                }
            }
        }
        
    }
    if(s==0)
    {
        for(int i=0;i<k;i++)
        {
            if(g[i]==12||g[i]==13||g[i]==14)
            {
                cout<<character[i][0]<<"÷"<<character[i][1]<<fuhao[g[i]][1]<<character[i][2]<<"="<<endl;
            }
            else if(g[i]==3||g[i]==7||g[i]==11)
            {
                cout<<character[i][0]<<fuhao[g[i]][0]<<character[i][1]<<"÷"<<character[i][2]<<"="<<endl;
            }
            else if(g[i]==15)
            {
                cout<<character[i][0]<<"÷"<<character[i][1]<<"÷"<<character[i][2]<<"="<<endl;
            }
            else
                cout<<character[i][0]<<fuhao[g[i]][0]<<character[i][1]<<fuhao[g[i]][1]<<character[i][2]<<"="<<endl;
        }
    }
    else
    {
        for(int i=0;i<k;i++)
        {
            int q0,q1,q2;
            q0=rand()%3;
            q1=rand()%3;
            q2=rand()%3;
            
            if(q0==1)
            {
                cout<<"("<<character[i][0]<<"/"<<character[i][3]<<")"<<fuhao[g[i]][0]<<character[i][1]<<"÷"<<character[i][2]<<"="<<endl;
            }
            else if(q0==0)
            {
                cout<<character[i][0]<<fuhao[g[i]][0]<<character[i][1]<<"÷"<<character[i][2]<<"="<<endl;
            }
            else if(q1==1)
            {
                cout<<character[i][0]<<fuhao[g[i]][0]<<"("<<character[i][1]<<"/"<<character[i][3]<<")"<<"÷"<<character[i][2]<<"="<<endl;
            }
            else if(q1==0)
            {
                cout<<character[i][0]<<fuhao[g[i]][0]<<character[i][1]<<"÷"<<character[i][2]<<"="<<endl;
            }
            else if(q2==1)
            {
                cout<<character[i][0]<<fuhao[g[i]][0]<<character[i][1]<<"÷"<<"("<<character[i][2]<<"/"<<character[i][3]<<")"<<"="<<endl;
            }
            else
            {
                cout<<character[i][0]<<fuhao[g[i]][0]<<character[i][1]<<"÷"<<character[i][2]<<"="<<endl;
            }
        }
    }
}

int main()
{
    repeate();
    return 0;
}