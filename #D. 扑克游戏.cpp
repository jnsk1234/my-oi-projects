#include<bits/stdc++.h>
using namespace std;
long long a[1000005],c[100005],n;
long long ans;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		c[i]=a[i]-a[i-1];
	 } 
	ans=a[1];
	for(int i=2;i<=n;i++)
	{
		if(c[i]>0) ans+=c[i];
	}
	cout<<ans;
    return 0;
}

