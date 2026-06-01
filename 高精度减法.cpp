#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int a[245],b[245],c[260];
int main()
{
	cin>>s1>>s2;
	int al=s1.size();
	int bl=s2.size();
	if(al<bl||al==bl&&s1<s2)
	{
		swap(s1,s2);
		swap(al,bl);
		cout<<'-';
	}
	for(int i=0;i<=al;i++)
	{
		a[al-i]=s1[i]-'0';
	}
	for(int i=0;i<=bl;i++)
	{
		b[bl-i]=s2[i]-'0';
	}
	for(int i=1;i<=al;i++)
	{
		c[i]+=a[i]-b[i];
		if(c[i]<0)
		{
			c[i+1]--;
			c[i]+=10;
		}
	}	
	int x=0;	
	for(int i=al;i>=1;i--)
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
a[n]=a[n-1]+a[n-1]+a[n-2];
