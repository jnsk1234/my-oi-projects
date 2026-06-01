#include<bits/stdc++.h>
using namespace std;
int n; 
int a[10];
void dfs(int x,int d)
{
	a[d]=x;
	if(d==n)
	{
		for(int i=1;i<=d;i++)
		{
			cout<<a[i];
		}
		cout<<endl;
		return ; 
	}
	for(int i=1;i<=n;i++)
	{
		dfs(i,d+1);
	}
}
int main()
{
	cin>>n;
	dfs(0,0);
    return 0;
}
