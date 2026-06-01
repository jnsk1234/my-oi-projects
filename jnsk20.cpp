#include<bits/stdc++.h>
using namespace std;
char a[10005];
int n,sc,cnt=1;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		while(i<n&&a[i]=='V'&&a[i+1]==a[i])
		{
			cnt++;
			i++;
		}
		if(cnt>=3)
		{
			sc+=(cnt-2);
		}
		cnt=1;
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]=='V') 
			sc++;
		else if(a[i]=='T')
			sc+=0;
		else if(a[i]=='X')
			sc-=1;
	}
	cout<<sc;
    return 0;
}
