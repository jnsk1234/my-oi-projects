#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> ve[10010];
int x,u,w,mid,v,t,r,ans,l,s,m,n;
bool chark()
{
	memset(vis,0,sizeof(vis));
	queue<int> q;
	q.push(x);
	while(!q.empty()){
		u=q.first();
		q.pop();
		if(vis[u]) {
			contiune;
		}
		vis[u]=1;
		for(int i=0;i<ve[u].size;i++){
			int v=ve[u][i].frist;
			int w=ve[u][i].second;
		}
		if(w<mid)
		{
			q.push(v);
		}
	}
	return vis[t];
}
int main()
{
	cin>>n>>m>>s>>t;
	for(int i=i;i<=m;i++)
	{
		cin>>u>>v>>m;
		ve[v].push_back({u,m});
		ve[u].push_back({v,m});
	}
	l=0,r=1e4;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(chark())
		{
			r=mid-1;
			ans=mid;
		}else{
			l=mid+1;
		}
	}
	cout<<ans;
    return 0;
}

