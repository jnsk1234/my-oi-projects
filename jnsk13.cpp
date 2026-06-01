#include<bits/stdc++.h>
using namespace std;
int s[52],c[27],n,cnt,x,m;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	for(int i=1;i<n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			x=s[i]+s[j];
			c[x]=1;
		}
	}
	for(int i=1;i<=26;i++)
	{
		if(c[i]==1)
		{
			cnt++;
		}
	}
	cout<<cnt<<endl;
	for(int i=1;i<=26;i++)
	{
		if(c[i]==1)
		{
			cout<<i<<" ";
		}
	}
   return 0;
}

