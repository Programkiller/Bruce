//2016/3/3    王宗泽
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand((unsigned)time(NULL));
	int i;
	for(i=0;i<30;i++)
	{
		int firstnum=rand()%100;
		int secondnum=rand()%100;
		int thirdnum=rand()%100;
		int forthnum=rand()%100;
		switch(int(firstnum%7))
		{
		case 0:cout<<firstnum<<"+"<<secondnum<<"="<<endl; break;
		case 1:cout<<firstnum<<"-"<<secondnum<<"="<<endl; break;
		case 2:cout<<firstnum<<"*"<<secondnum<<"="<<endl; break;
		case 3:cout<<firstnum<<"/"<<secondnum<<"="<<endl; break;
		case 4:if((firstnum>secondnum)||(thirdnum>forthnum))
				{
				  i=i-1;
			 }
			else cout<<"("<<firstnum<<"/"<<secondnum<<")"<<"+"<<"("<<thirdnum<<"/"<<forthnum<<")"<<"="<<endl; break;
		case 5:if((firstnum>secondnum)||(thirdnum>forthnum))
				{
				 i=i-1;
			}
			else cout<<"("<<firstnum<<"/"<<secondnum<<")"<<"-"<<"("<<thirdnum<<"/"<<forthnum<<")"<<"="<<endl; break;
		case 6:if((firstnum>secondnum)||(thirdnum>forthnum))
			{
				i=i-1;
			}
			   
			else cout<<"("<<firstnum<<"/"<<secondnum<<")"<<"*"<<"("<<thirdnum<<"/"<<forthnum<<")"<<"="<<endl; break;
		case 7:if((firstnum>secondnum)||(thirdnum>forthnum))
				{
				 i=i-1;
			  }
			else cout<<"("<<firstnum<<"/"<<secondnum<<")"<<"/"<<"("<<thirdnum<<"/"<<forthnum<<")"<<"="<<endl; break;
        }
		}
}