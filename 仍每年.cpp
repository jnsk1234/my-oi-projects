#include<iostream>
using namespace std;
int main()
{
	int year;
	cin>>year;
	if(year%100!=0&&year%4==0)
	{
		cout<<"Yes";
	}
	else if(year%400==0)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"no";
	}
	return 0;
	
}
