#include<bits/stdc++.h>
using namespace std;
int m,n,cfx,cfy,mbx,mby,k; 
int a[20][20];
int d[600][5];
int dx[]= {0,-1,0,1};
int dy[]= {-1,0,1,0};
void dfs(int x,int y,int bs)
{
	a[x][y]=0;
	d[bs][1]=x;
	d[bs][2]=y;
	if(x==mbx&&y==mby)
	{
		for(int i=1;i<=bs;i++)
		{
			if(d[i][1]==mbx&&d[i][2]==mby)
			{
				cout<<'('<<d[i][1]<<','<<d[i][2]<<')';
				break; 
			}
			cout<<'('<<d[i][1]<<','<<d[i][2]<<')'<<"->";
		}
		cout<<endl;
		k++;
		return;
	}
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx<=m&&ny<=n&&nx>=1&&ny>=1&&a[nx][ny]==1)
		{
			dfs(nx,ny,bs+1);
			a[nx][ny]=1;
		}
	}
}
int main()
{
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			 scanf("%1d",&a[i][j]);
		}
	}
	cin>>cfx>>cfy>>mbx>>mby;
	dfs(cfx,cfy,1);
	if(k==0)
	{
		cout<<-1;
	}
    return 0;
}

