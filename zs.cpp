#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n; 
	bool a[n+1];
	for(int i=2;i<n;i++)
	{
		a[i]=true;
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=n/i;j++)
		{
			a[i*j]=false;
		}
	}
	for(int i=2;i<n;i++)
	{
		if(a[i])
		{
			cout<<i<<' ';
		}
	}
}
