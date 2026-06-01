#include<bits/stdc++.h>
using namespace std;
int a[15][15];
int n;
int main()
{
	a[1][1]=1;
	a[2][1]=1;
	a[2][2]=1;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			a[i][j]=a[i-1][j]+a[i-1][j-1];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]!=0)
			{
				cout<<a[i][j]<<' ';
			}
		}
		cout<<endl;
	}

    return 0;
}

