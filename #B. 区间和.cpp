#include<bits/stdc++.h>
using namespace std;
int n,a[100005],s[100005],l,r,q;
int main()
{
	cin>>n>>q;
	cin>>a[1];
	s[1]=a[1];
	for(int i=2;i<=n;i++)
	{
		cin>>a[i];
		s[i]=a[i]+s[i-1];
	}
	for(int i=1;i<=q;i++)
	{
		cin>>l>>r;
		cout<<s[r]-s[l-1]<<endl;
	}

    return 0;
}

