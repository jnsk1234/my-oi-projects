#include<bits/stdc++.h>
using namespace std;
char s[50];
int a(int r,char s[])
{
	int w=1;
	int n=0;
	for(int i=strlen(s)-1;i>=0;i--)
	{
		if((s[i]>='0')&&(s[i]<='9'))
		{
			n+=(s[i]-'0')*w;
		}
		else
		{
			n+=(s[i]-'A'+10)*w;
		}
		w*=r;
	}
	return n;
}
int main()
{
	int r;
	
	cin>>s>>r;
	int ans=a(r,s);
	cout<<ans;
    return 0;
}

