#include<iostream>
using namespace std;
int main()
{
	int n;
	char b;
	cin>>n>>b;
	for(int i=1;i<=n;i++)
	{
		cout<<b;
	}
	cout<<endl;
	for(int i=2;i<=n-1;i++)
	{
		cout<<b;
		for(int j=2;j<=n-1;j++)
		{
			cout<<' ';
		}
		cout<<b<<endl;
		 
	}
	for(int i=1;i<=n;i++)
	{
		cout<<b;
	}
	return 0;
} 

