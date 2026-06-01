#include<bits/stdc++.h>
using namespace std;
int s[100005],a[100005],n,q,r;
int main()
{
	cin>>n>>q;
	s[1]=1;
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
		s[i]=a[i]+s[i-1];
	}
	for(int l=1;l<=n-q;l++)
	{
		r+=q;
		cout<<s[l-1]-s[r]<<endl;
	}
	

    return 0;
}

