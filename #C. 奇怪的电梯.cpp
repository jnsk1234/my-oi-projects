#include<bits/stdc++.h>
using namespace std;
int s[205];
int d[205]; 
int n,a,b;
int ans=2e9-1;
void dfs(int x,int cs)
{
	d[x]=cs;
	if(x+s[x]>=1&&d[x+s[x]]>cs+1&&x+s[x]<=n)
	{
		dfs(x+s[x],cs+1);
	}
	if(x-s[x]>=1&&d[x-s[x]]>cs+1&&x-s[x]<=n)
	{
		dfs(x-s[x],cs+1);
	}
}
int main()
{
	cin>>n>>a>>b;
	for(int i=1;i<=n;i++)
	{
		d[i]=1e9;
		cin>>s[i];
	}
	dfs(a,0);
	
	if(d[b]==1e9)
	{
		cout<<-1;
		return 0;
	}
	
	cout<<d[b];
    return 0;
}

