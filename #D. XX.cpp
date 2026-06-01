#include<bits/stdc++.h>
using namespace std;
int n,m;
long long ans;
bool cmp(int a,int b)
{
	return a<b;
}
int t[40000],z[40000];
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>t[i];
	}
	for(int i=1;i<=m;i++)
	{
		cin>>z[i];
	}
	sort(z+1,z+1+m,cmp);
	sort(t+1,t+1+n,cmp);
	int s=n;
	for(int i=1,j=1;i<=n&&j<=m;)
	{
		if(s==0)
		{
			break;
		}
		if(t[i]<=z[j])
		{
			ans+=z[j];
			s--;
			i++;
			j++;
		}
		else if(t[i]>z[j])
		{
			j++;
		}
		
	}
	cout<<ans;
    return 0;
}

