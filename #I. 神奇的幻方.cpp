#include<bits/stdc++.h>
using namespace std;
int x,y,n,k=1;
int a[55][55];
int main()
{
	cin>>n;
	x=1;y=n/2+1;
	a[x][y]=k++;
	while(k<=n*n)
	{
		if(x==1&&y!=n)
		{
			x=n,y++;
		} 
		else if(x!=1&&y==n)
		{
			x--;y=1;
		}
		else if(x==1&&y==n)
		{
			x++;
		}
		else if(x!=1&&y!=n)
		{
			if(a[x-1][y+1]==0)
			{
				x--,y++;
			}
			else{
				x++;
			}
		}
		a[x][y]=k++;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}

    return 0;
}

