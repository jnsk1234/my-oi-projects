#include<iostream>
using namespace std;
int main()
{
	int year,m;
	cin>>year>>m;
	if(m<=12)
	{
		if(m==2)
		{
			if(year%100!=0&&year%4==0||year%400==0)
			{
				cout<<29;
			}
			else
			{
				cout<<28;
			}
		}
		else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		{
			cout<<31;
		}
		else
		{
			cout<<30;
		}
	}
	return 0;
}
