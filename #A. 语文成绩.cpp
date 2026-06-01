#include<bits/stdc++.h>
using namespace std;
int n,p,x,y,z,maxi=2e9-1 ;
int a[5000005],b[5000005];
int main()
{
	cin>>n>>p;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=a[i]-a[i-1];
	}
	for(int i=1;i<=p;i++)
	{
		cin>>x>>y>>z;
		b[x]+=z;
		b[y+1]-=z;
	}
	for(int i=1;i<=n;i++)
	{
		b[i]=b[i]+b[i-1];
		cout<<b[i]<<' ';
	}

    return 0;
}

