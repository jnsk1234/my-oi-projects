#include<bits/stdc++.h>
using namespace std;
int n,cnt=1,mx=1;
char a[105],c[105];
int main()
{
	cin>>n>>a[1];
	for(int i=2;i<=n;i++)
	{
		a[i]=((a[i]-1*3703+1047)%n)+1;
	}
	/*
	for(int i=2;i<n;i++)
	{
		c[i]++;
		while(a[i]==a[i-1])
		{
			cnt++;
			if(cnt==2)
			{
				c[a[i]]+=2;
			}
			if(cnt>=3)
			{
				c[a[i]]+=3;
			}
			i++;
		}
		cnt=1;
	}
	sort(c,c+n+1);
	*/
	
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<' ';
	}
    return 0;
}
