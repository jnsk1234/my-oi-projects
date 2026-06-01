#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int b[100];
int n,k=1,x;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		b[i]=i;
	}
	for(int i=n+1;i<=n*2-1;i++)
	{
		b[i]=n*2-1-i+1;
	}
	for(int i=1;i<=n;i++)
	{
		x=1;
		for(int j=k;j<=k+n;j++)
		{
			a[i][x]=b[j];
			x++;
		}
		k++;
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


