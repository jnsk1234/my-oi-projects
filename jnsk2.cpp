#include<bits/stdc++.h>
using namespace std;
int s[15],n,d;//s[15]数组，n长度，l位置 
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	d=s[n];
	for(int i=n+1;i>=1;i--)
	{
		s[i+1]=s[i];
	}
	s[1]=d;
	for(int i=1;i<=n;i++)
	{
		cout<<s[i]<<' ';
	}
	
    return 0;
}

