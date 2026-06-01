#include<bits/stdc++.h>
using namespace std;
long long n,a[100010],sum,k; 
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++)
	{
		while(sum+a[i]<=(1ll<<31)-1&&k)
		{
			sum+=a[i];
			a[i]*=2;
			k--;
		}
	}
	cout<<sum;
    return 0;
}

