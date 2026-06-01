#include<bits/stdc++.h>
using namespace std;
int m,n,l[100005],r[100005],a,b,x;
int main()
{
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		cin>>l[i]>>x;
		r[i]=l[i]+x-1;
	}
	sort(l+1,l+m+1);
	sort(r+1,r+m+1);
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b;
		int ans1=lower_bound(l+1,l+m+1,a+b)-l;
		int ans2=lower_bound(r+1,r+m+1,a)-r;
		cout<<ans1-ans2<<endl;
	}
    return 0;
}

