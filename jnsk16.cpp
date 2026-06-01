#include<bits/stdc++.h>
using namespace std;
int n,t[1005],xb,sc;
int main()
{
	cin>>n;
	int x;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		t[x]++;
	}
	for(int i=1;i<=1005;i++)
	{
		if(t[i]!=0)
		{
			xb=i;
			break;
		}
	}
	for(int i=xb;i<=1005;i++)
	{
		if(t[i]==0)
		{
			sc=i;
			break;
		}
	}
	cout<<sc;
    return 0;
}

