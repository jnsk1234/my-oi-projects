#include<bits/stdc++.h>
using namespace std;
int s[100005],a[100005],n,q;
int main()
{
	cin>>n>>q;
	s[1]=1;
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
		s[i]=a[i]+s[i-1];
	}
	for(int z=1;z<=n-q;z++)
	{
		cout<<s[z+q]-s[z-1]<<endl;
	}
    return 0;
}

