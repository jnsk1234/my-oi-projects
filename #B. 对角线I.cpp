#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int n;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j==i)
			{
				a[i][j]=1;
			}
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

