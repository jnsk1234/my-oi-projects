#include<bits/stdc++.h>
using namespace std;
int n,s[1005],m,x;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		s[x]++;
	}
	for(int i=1;i<=m;i++)
	{
		cin>>x;
		s[x]++;
	}
	for(int i=0;i<=1000;i++)
	{
		if(s[i]!=0)
		{
			cout<<i<<' ';
		}
	}
	cout<<endl;
	for(int i=0;i<=1000;i++)
	{
		if(s[i]==2)
		{
			cout<<i<<' ';
		}
	}
    return 0;
}

