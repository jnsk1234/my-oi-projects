#include<bits/stdc++.h>
using namespace std;
int a[10];
int au[10];
bool f[10];
int n;
void dfs(int x,int d)
{
	a[d]=x;
	if(d==n)
	{
		for(int i=1;i<=d;i++)
		{
			cout<<au[a[i]]<<' ';
		 } 
		 cout<<endl;
		 return;
	}
	for(int i=1;i<=n;i++)
	{
		if(f[i]!=1)
		{
			f[i]=1;
			dfs(i,d+1);
			f[i]=0;
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>au[i];
	}
	sort(au+1,au+n+1);
	dfs(0,0);
    return 0;
}

