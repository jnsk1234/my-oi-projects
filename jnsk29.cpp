#include<bits/stdc++.h>
using namespace std;
char a[1005];
int l,r;
int main()
{
	cin>>a;
	int len=strlen(a);
	while(a[l]=='*')
	{
		l++; 
	}
	r=len-1;
	while(a[r]=='*')
	{
		r--;
	}
	for(int i=0;i<l;i++)
	{
		cout<<'*';
	}
	for(int i=l;i<=r;i++)
	{
		if(a[i]=='*')
		{
			
		}
		else{
			cout<<a[i];
		}
	}
	for(int i=r+1;i<len;i++)
	{
		cout<<'*';
	}
    return 0;
}

