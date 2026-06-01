#include<bits/stdc++.h>
using namespace std;
long long a[10000005];
long long l,r,mid,x,n,m,cnt;
long long fin(int x)
{
	l=1,r=n;
	while(l<=r)
	{
		mid=(r+l)/2;
		if(a[mid]==x)
		{
			return 0;
		}else if(a[mid]<x)
		{
			l=mid+1;
		}else{
			r=mid-1;
		}
	}
    long long f = 1e9;
    if (r >= 1) {
        f = min(f, x - a[r]);
    }
    if (l <= n) {
        f = min(f, a[l] - x);
    }
    return f;

}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n+1);
	while(m--)
	{
		cin>>x;
		cnt+=fin(x);
	}
	cout<<cnt;
    return 0;
}
