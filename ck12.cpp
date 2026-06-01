#include<bits/stdc++.h>
using namespace std;
int s[105],n,x;
int main()
{
	cin>>n;
	int d=10000;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(s[i]<d)
		{
			d=s[i];
			x=i;
		}
	}
	for(int i=x;i<=n-1;i++)
	{
		s[i]=s[i+1];
	}
	for(int i=1;i<=n-1;i++)
	{
		cout<<s[i]<<' ';
	}
    return 0;
}

