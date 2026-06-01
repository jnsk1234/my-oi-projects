#include<iostream>
using namespace std;
int main()
{
	int n;
	char ch;
	cin>>n>>ch;
	for(int k=1;k<=n;k++)
	{
		cout<<' ';
		
	}
	cout<<ch<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<n;j++)
		{
			cout<<' ';
		}
		cout<<ch;
		for(int j=2;j<=2*i;j++)
		{
			cout<<' ';
		}
		cout<<ch<<endl;
	}
	
	for(int i=n-1;i>=1;i--)
	{
		for(int j=i;j<n;j++)
		{
			cout<<' ';
		}
		cout<<ch;
		for(int j=2*i;j>1;j--)
		{
			cout<<' ';
		}
		cout<<ch<<endl;
	}
	for(int k=1;k<=n;k++)
	{
		cout<<' ';
	}
	cout<<ch;
	return 0;
}

