#include<bits/stdc++.h>
using namespace std;
int a[1000005],n,mx=-1;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x,y;
		cin>>x>>y;
		a[x]++,a[y+1]--;
	}
	for(int i=0;i<=1e6+1;i++)
	{
		a[i]+=a[i-1];
		mx=max(mx,a[i]);
	}
	cout<<mx;
    return 0;
}

