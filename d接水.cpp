#include<bits/stdc++.h>
using namespace std;
int n,m,cnt,w[10005];
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>w[i];
	}
	for(int i=1;i<=n-m;i++)
	{
		sort(w+i,w+i+m);
		cnt+=w[i];
		for(int j=i+1;j<i+m;j++)
		{
			w[j]-=w[i];
		}
	}
	sort(w+n-m+1,w+n+1);
	 
	cout<<cnt+w[n];
    return 0;
}

