#include<bits/stdc++.h>
using namespace std;
int n,s[105],a[10005],pj,zs,zws;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		s[a[i]]++;
	}
	double x=0;
	for(int i=1;i<=n;i++)
	{
		x+=a[i];
	}
	double hh=x/n;
	printf("%.2f",hh);
	int mx=0;
	int c=0;
	for(int i=1;i<=100;i++)
	{
		if(mx<s[i])
		{
			mx=s[i];
			c=i;
		}
	}
	cout<< ' ';
	printf("%d",mx);
	sort(a[1],a[n+1])
	if(n%2==0)
	{
		
	}
    return 0;
}

