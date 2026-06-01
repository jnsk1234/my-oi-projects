#include<bits/stdc++.h>
using namespace std;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int k;
char a[1005][1005];
int r,c;
void dfs(int x,int y)
{
	a[x][y]='.';
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(a[nx][ny]=='#')
		{
			dfs(nx,ny);
		}
	}
}
int main()
{
	cin>>r>>c;
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=r-1;i++)
	{
		for(int j=1;j<=c-1;j++)
		{
			int o=0;
			if(a[i][j]=='#')
			{
				o++;
			}
			if(a[i+1][j]=='#')
			{
				o++;
			}
			if(a[i][j+1]=='#')
			{
				o++;
			}
			if(a[i+1][j+1]=='#')
			{
				o++;
			}
			if(o==3)
			{
				cout<<"Bad placement."<<endl;
				return 0;
			}
		}
	}	
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			if(a[i][j]=='#')
			{
				k++;
				dfs(i,j);
			}
		}
	}
	cout<<"There are "<<k<<" ships."<<endl;
    return 0;
}

