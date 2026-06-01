#include<bits/stdc++.h>
using namespace std;
int n,a[1005],c[10]; 
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int i=1;
	for(int i=1;i<=n;i++)
	{
		while(a[i]!=0)
		{
			int s=a[i]%10;
			c[s]++;
			a[i]/=10;
		}
	}
	for(int i=9;i>=0;i--)
	{
		for(int j=0;j<c[i];j++)
		{
			cout<<i;
		}
	}
    return 0;
}
