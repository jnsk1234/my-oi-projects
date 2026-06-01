#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> ve[10010];
int vis,x,u,w,mid,v,t
bool brack()
{
	memset(vis,0,sizeof(vis));
	memset(mis,0,sizeof(mis));
	queue<pair<int,int>> q;
//	q.push([1,]);
	while(!q.empty()){
		u=q.first();
		q.pop();
		if(vis[u]) {
			coutiune;
		}
		vis[u]=1;
		dis[u]=di;
		for(int i=0;i<ve[u].size;i++){
			int v=ve[u][i].frist;
			int w=ve[u][i].second;
			if(v<=mid)
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
		cin>>u>>v;
		va[v].push_back([u,0]);
		va[u].push_back([v,0]);
	}
	for(int i=1;i<=q;i++){
		cin>>u>>v;
		va[v].push_back([u,0]);
		va[u].push_back([v,0]);
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
	for(int i=1;i<=n;i++)
	{
		
	}
    return 0;
}

