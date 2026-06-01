#include<bits/stdc++.h>
using namespace std;


int c[1000000000];
int a,n,cnt;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		c[a]++;
	}
	for(int i=1;i<=100000000;i++)
	{
		if(c[i]==2)
		{
			cnt++;
		}
		if(c[i]>=3)
		{
			cout<<"-1";
			return 0;
		}
	}
	if(cnt==0)
	{
		cout<<"0";
	}else{
		cout<<cnt;
	}
    return 0;
}

