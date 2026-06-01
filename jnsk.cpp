#include<bits/stdc++.h>
using namespace std;
int s[15],n,x,f,l;
int main()
{
	cin>>n;
	cin>>x;
	cin>>f;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}

	for(int i=1;i<=n;i++)
	{
		if(s[i]==x)
		{
			
			l=i;
		}
	}
	l++;
	for(int i=n;i>=l;i--)
	{
		s[i+1]=s[i];
	}
	s[l]=f;
	for(int i=1;i<=n+1;i++)
	{
		cout<<s[i]<<' ';
	}
    return 0;
}

