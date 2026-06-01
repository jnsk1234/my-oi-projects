#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1005][1005];
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		a[i][1]=1;
	}
	for(int j=1;j<=m;j++)
	{
		a[1][j]=1;
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=m;j++)
		{
			a[i][j]=a[i-1][j]+a[i][j-1];
			a[i][j]%=1000000007;
		}
	}
	cout<<a[n][m];
    return 0;
}

