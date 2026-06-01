#include<bits/stdc++.h>
using namespace std;
char a[1005];
int s[15];
int main()
{
	cin>>a;
	int l=strlen(a);
	for(int i=0;i<=l-1;i++)
	{
		int x=int(a[i])-'0';
		s[x]++;
	}
	for(int i=0;i<10;i++)
	{
		if(s[i]!=0)
		{
			cout<<i<<':'<<s[i]<<' ';
		}
	}
    return 0;
}

