#include<bits/stdc++.h>
using namespace std;
struct node {
	int x,y;
};
int n,m; 
int b[15][15];
node a[100];
int k;
void dfs(int x,int y,int dep)
{
	if(x==n&&y==m)
	{
		
		k++;
		cout<<k<<':';
		for(int i=0;i<=dep;i++)
		{
			if(i==0)
			{
				cout<<a[i].x<<','<<a[i].y;
			}else{
				cout<<"->"<<a[i].x<<','<<a[i].y;
			}
			
		}
		cout<<endl;
		return;
	}
	if(y<=n)
	{
		a[dep+1]={x,y+1};
		b[x][y+1]=1;
		dfs(x,y+1,dep+1);
		a[dep+1]={0,0};
		b[x][y+1]=0;
	}
	if(x<=m)
	{
		a[dep+1]={x+1,y};
		b[x+1][y]=1;
		dfs(x+1,y,dep+1);
		a[dep+1]={x+1,y};
		b[x+1][y]=0;
	}
}
int main()
{
	cin>>n>>m;
	a[0]={1,1};
	dfs(1,1,0);
    return 0;
}
