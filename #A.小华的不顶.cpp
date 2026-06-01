#include<bits/stdc++.h>
using namespace std;
int n;
int a[50];
void dfs(int d,int y,int m)
{
	if(d==n)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<a[i];
		}
		cout<<endl;
		return ;
	}
	if(y<2)
	{
		a[d+1]=0;
		dfs(d+1,y+1,0);
	}
	if(m<2)
	{
		a[d+1]=1;
		dfs(d+1,0,m+1);	
	}
}
int main()
{
	cin>>n;
	dfs(0,0,0);
    return 0;
}

