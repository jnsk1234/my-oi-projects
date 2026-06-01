#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int b[105][105];
int n;
long long fun(int x,int y)
{
	if(x==n)
	{
		return a[x][y];
	}if(b[x][y]==0)
	{
		b[x][y]=max(fun(x+1,y),fun(x+1,y+1))+a[x][y];
	}
	
	return b[x][y];
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<fun(1,1);
	
    return 0;
}

