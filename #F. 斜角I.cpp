#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int n,k=1;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		a[1][i]=k;
		k++;
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			a[i][j]=a[i-1][j]+1;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<setw(3)<<a[i][j];
		}
		cout<<endl;
	}

    return 0;
}

