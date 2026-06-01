#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int a[1000],b[1000],c[10000000];
void chen(string s1,string s2){
	int s1l=s1.size();
	for(int i=0;i<s1l;i++)
	{
		a[s1l-i]=s1[i]-'0';
	}
	int s2l=s2.size();
	for(int i=0;i<s2l;i++)
	{
		b[s2l-i]=s2[i]-'0';
	}
	for(int i=1;i<=s1l;i++)
	{
		for(int j=1;j<=s2l;j++)
		{
			c[i+j-1]+=a[i]*b[j];
		}
	}
	for(int i=1;i<=s1l+s2l;i++)
	{
		if(c[i]>=10)
		{
			c[i+1]+=c[i]/10;
			c[i]%=10;
		}
	}
	int l=s1l+s2l;
	while(l>1 && c[l]==0) l--;
	for(int i=l;i>=1;i--)
	{
		cout<<c[i];
	}
}
int main()
{
	cin>>s1>>s2;
	chen(s1,s2); 
    return 0;
}
/*
i+j-1
到着存
外循环控制一个因数内循环控制一件因数让积的i+j-1位+=a[i]*a[j] 
*/
