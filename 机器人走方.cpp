#include<bits/stdc++.h>
using namespace std;
int n,m; 

char a[1000];
int b[15][15];
void dfs(int x,int y,int dep)
{
	if(x==n&&y==m)
	{
		for(int i=1;i<=dep;i++)
		{
			cout<<a[i];
		}
		cout<<endl;
		return;
	}
	if(y<m)
	{
		a[dep+1]='d';
		b[x][y+1]=1;
		dfs(x,y+1,dep+1);
		b[x][y+1]=0;
	}
	if(x<n)
	{
		a[dep+1]='r';
		b[x+1][y]=1;
		dfs(x+1,y,dep+1);
		b[x+1][y]=0;
	}
}
int main()
{
	cin>>m>>n;
	m--;
	n--;
	dfs(0,0,0);

    return 0;
}

