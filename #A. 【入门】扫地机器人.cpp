#include<bits/stdc++.h>
using namespace std;
int n,m,k=1;
int a[100][100];
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
void fun(int x,int y)
{
	a[x][y]=k++;
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(a[nx][ny]==0&&nx<=n&&ny<=m&&ny>=1&&nx>=1)
		{
			fun(nx,ny);
		}
	}
}
int main()
{
	cin>>n>>m;
	fun(1,1);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<setw(3)<<a[i][j];
		}
		cout<<endl;
	}
    return 0;
}

