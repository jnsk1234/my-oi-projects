#include<bits/stdc++.h>
using namespace std;
int n;
int s[1005];      
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	for(int i=1;i<=n/2;i++)
	{
		s[i]=s[i]*2;
	}for(int i=n/2;i<=n;i++)
	{
		s[i]=s[i]+1;
	}
	for(int i=1;i<=n;i++)
	{
		cout<<s[i];
	}
	
	
    return 0;
}

