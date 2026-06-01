#include<bits/stdc++.h>
using namespace std;
bool a[200000];
int n,m,x,y;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y;
		for(int j=x;j<=y;j++)
		{
			if(a[j]==1)
			{
				a[j]=0;
			}
			else{
				a[j]=1;
			}
		 } 
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]==1)
		{
			cout<<0;
		}
		else{
			cout<<1;
		}
	}

    return 0;
}

