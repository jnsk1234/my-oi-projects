#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int a[205],b[205],c[220];
int main()
{
	cin>>s1>>s2;
	int al=s1.size();
	for(int i=0;i<=al;i++)
	{
		a[al-i]=s1[i]-'0';
	}
	int bl=s2.size();
	for(int i=0;i<=bl;i++)
	{
		b[bl-i]=s2[i]-'0';
	}
	int l=max(al,bl);
	for(int i=1;i<=l;i++)
	{
		c[i]=a[i]+b[i];
	}
	for(int i=1;i<=l;i++)
	{
		if(c[i]>=10)
		{
			c[i+1]++;
			c[i]%=10;
		}
	}
	if(c[l]>0) l++;
	int x=0;
	for(int i=l;i>=1;i--)
	{
		if(c[i]!=0)
		{
			x=i;
			break;
		}
	}
	if(c[x]==0)
	{
		cout<<0;
		
		return 0;
	}
	for(int i=x;i>=1;i--)
	{
		cout<<c[i];
	}
    return 0;
}

