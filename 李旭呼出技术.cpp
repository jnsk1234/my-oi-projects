#include<iostream>
using namespace std;
int mian()
{
	int n,p,x;
	cin>>n>>p>>x;
	int s[n+1];
	for(int i=0;i<=n;i++)
	{
		cin>>s[i];
	}
	for(int i=n+1;i<p+1;i++)
	{
		s[i]=s[i+1];
	}
	s[p]=x;
	for(int i=0;i<=n;i++)
	{
		cout<<s[i];
	}
}
