#include<bits/stdc++.h>
using namespace std;
int k,e,n;
int x[1005],f[1005],c[1005];
int cb[1005];
long long mx;
int main()
{
	cin>>k>>e>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x[i]>>f[i]>>c[i];
		cb[i]=e-x[i]+c[i];
	}
	sort(cb+1,cb+n+1);
	for(int i=1;i<=k;i++)
	{
		if(k<=f[i])
		{
			mx+=cb[i]*k;break;
		}mx+=cb[i]*f[i];
	}
	cout<<mx;
    return 0;
}

