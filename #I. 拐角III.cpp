#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int n,k=1;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			a[i][j]=j;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]==0)
			{
				a[i][j]=a[i][j-1];
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<setw(3)<<n+1-a[i][j];
		}
		cout<<endl;
	}

    return 0;
}
