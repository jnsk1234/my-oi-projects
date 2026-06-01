#include<bits/stdc++.h>
using namespace std;
int n;
int a[10005]; 
long long cnt;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n+1);
	cnt=a[1]+a[2];
	for(int i=3;i<=n;i++)
	{
		cnt+=cnt;
		cnt+=a[i];
	}
	cout<<cnt;
    return 0;
}

