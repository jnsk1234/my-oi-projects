#include<bits/stdc++.h>
using namespace std;
int n,m;
int q[100005];
long long a,b,c,x,y,ans;
int main()
{
	cin>>n>>m;
	cin>>x;
	for(int i=2;i<=m;i++)
	{
		cin>>y;
		if(x<y)
		{
			q[x]++;
			q[y]--;
		}
		if(x>y)
		{
			q[y]++;
			q[x]--;
		}
		x=y;
	}
	for(int i=1;i<=m;i++)
	{
		q[i]+=q[i-1];
	}
	for(int i=1;i<=m;i++)
	{
		cout<<q[i]<<' ';
		//cin>>a>>b>>c;
		//ans+=max(a*q[i],b*q[i]+c);
	}
	//cout<<ans;
    return 0;
}

