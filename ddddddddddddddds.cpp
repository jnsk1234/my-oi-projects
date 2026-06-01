#include<bits/stdc++.h>
using namespace std;
long long a[1000005],s[1000005],n,k,cnt,mx=-1,id;
int main()
{
	cin>>n>>k;
	s[1]=a[1];
	for(long long i=2;i<=n;i++)
	{
		cin>>a[i];
		s[i]=a[i]+s[i-1];
	}
	for(long long i=k;i<=n;i++)
	{
		long long sum=s[i]-s[i-k];
		if(sum>=mx)
		{
			mx=sum;
		}
	}
	cout<<s[n]-mx;
	//cout<<endl<<id;
	//cout<<cnt;
    return 0;
}

