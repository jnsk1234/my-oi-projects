#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int n,k=1;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			a[j][i]=k;
			k++;
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
