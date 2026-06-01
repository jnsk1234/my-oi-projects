#include<bits/stdc++.h>
using namespace std;
int n,m;
int s[1005];      
int main()
{
	int max=-10000,min=100000;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(s[i]>max)
		{
			max=s[i];
		}
		if(s[i]<min)
		{
			min=s[i];
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(s[i]==max)
		{
			s[i]=s[i]*2;
		}if(s[i]==min)
		{
			s[i]=s[i]+1;
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		cout<<s[i]<<" ";
	}
    return 0;
}
