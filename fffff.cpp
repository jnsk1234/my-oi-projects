#include<iostream>
using namespace std;
int mian()
{
	int n,p,x;
	cin>>n>>p>>x;
	int s[n+2];
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	for(int i=n+1;i<p+1;i--)
	{
		s[i]=s[i-1];
	}
	s[p]=x;
	for(int i=1;i<=n+1;i++)
	{
		cout<<s[i]<<' ';
	}
}
