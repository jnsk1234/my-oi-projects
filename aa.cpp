#include<bits/stdc++.h>
using namespace std;
int n;
int a[105],sum,s,cnt;
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	sort(a+1,a+n+1,cmp); 
	for(int i=1;s<=sum/2;i++)
	{
		cnt++;
		s+=a[i];
	}
	cout<<cnt;

    return 0;
}

