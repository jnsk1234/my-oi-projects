#include<bits/stdc++.h>
using namespace std;
int n,a[100005],s[100005];
int main()
{
	cin>>n;
	cin>>a[1];
	s[1]=a[1];
	for(int i=2;i<=n;i++)
	{
		cin>>a[i];
		s[i]=a[i]+s[i-1];
	}
	cout<<n;
	for(int i=1;i<=n;i++)
	{
		cout<<s[i]<<endl;
	}

    return 0;
}

