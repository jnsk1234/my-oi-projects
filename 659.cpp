#include<bits/stdc++.h>
using namespace std;
int n,m;
int c[2005];
int ans;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		c[x]++;
	}
	for(int i=1;i<=m;i++)
	{
		cin>>x;
		c[x]++;
	}
	for(int i=1;i<=2000;i++)
	{
		if(c[i]==2)
		{
			ans++;
		}
	}
	cout<<ans;
    return 0;
    
}

