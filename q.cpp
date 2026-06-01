#include<bits/stdc++.h>
using namespace std;
string a[1005];
int n;
string jia(string s1,string s2)
{
	int a[1000]={0},b[1000]={0},c[1000]={0};
	string ret;
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
	for(int i=1000;i>=1;i--)
	{
		ret=char(c[i]+'0');
	}
	return ret;
}
int main()
{
	cin>>n;
	a[1]="1",a[2]="2";
	for(int i=3;i<=n;i++)
	{
		a[i]=jia(jia(a[i-1],a[i-1]),a[i-2]);
	}
	cout<<a[n];
    return 0;
}

