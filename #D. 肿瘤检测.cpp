#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int n,b,c;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]<=50)
			{
				b++;
				if(i!=1&&i!=n&&j!=1&j!=n)
				{
					if(a[i-1][j]<=50&&a[i+1][j]<=50&&a[i][j-1]<=50&&a[i][j+1]<=50)
					{
						c++;
					}
				}
			}
		}
	}
	cout<<b<<' '<<b-c;

    return 0;
}

