#include<bits/stdc++.h>
using namespace std;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int n;
int a[20][20];
int d[1000][5]; 
int k=1;
void dfs(int x,int y,int bs)
{
	a[x][y]=1;
	d[bs][1]=x;
	d[bs][2]=y;
	if(x==n&&y==n)
	{
		cout<<k<<":";
		for(int i=1;i<=bs;i++)
		{
			if(d[i][1]==n&&d[i][2]==n)
			{
				cout<<d[i][1]<<','<<d[i][2];
				break;
			}
			cout<<d[i][1]<<','<<d[i][2]<<"->";
		}
		cout<<endl;
		k++;
		return ;
	}
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(a[nx][ny]==0&&nx<=n&&ny<=n&&nx>=1&&ny>=1)
		{
			dfs(nx,ny,bs+1);
			a[nx][ny]=0;	
		}
	}
}
int main()
{
	cin>>n;
	dfs(1,1,1);


    return 0;
}

