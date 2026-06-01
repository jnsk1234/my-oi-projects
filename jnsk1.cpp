#include<bits/stdc++.h>
using namespace std;
int s[100],n,f,l;//s[15]数组，n长度，f数字，l插入位置 
int main()
{
	cin>>f;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	for(int i=1;i<=n+1;i++)
	{
		if(s[i]>f)
		{
			l=i;
			break;
		}
	}
	if(l==0)
	{
		s[n+1]=f;
	}else{
		for(int i=n;i>=l;i--)
		{
			s[i+1]=s[i];
		}
		s[l]=f;
	}
	
	for(int i=1;i<=n+1;i++)
	{
		cout<<s[i]<<' ';
	}
    return 0;
}
