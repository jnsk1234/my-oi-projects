#include<bits/stdc++.h>
using namespace std;
long long v[100005],a[100005],d,n,f,mia,mi=2e31-1,ans;
int main()
{
	cin>>n>>d;
	for(long long i=1;i<=n-1;i++)
	{
		cin>>v[i];
	}
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
		mi=min(mi,a[i]);
		f+=v[i];
		if(f>0)
		{
			ans+=(f+d-1)/d*mi;
			f-=(f+d-1)/d*d;
		}
	}
	cout<<ans;
    return 0;
}

