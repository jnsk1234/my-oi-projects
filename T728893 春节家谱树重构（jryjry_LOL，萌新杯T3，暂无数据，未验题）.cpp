#include<bits/stdc++.h>
using namespace std;
const int N=509;
bitset<N> f[N],pa[N];
vector<int> F[N];
int n,m,iD[N],aD[N],L,R;
int main(){
	cin>>n>>m;
	for(int i=0,u,v;i<m;i++)cin>>u>>v,F[v].push_back(u),f[u][v]=1;
	for(int i=1;i<=n;i++)f[i][i]=1;
	for(int k=1;k<=n;k++)for(int i=1;i<=n;i++)if(f[i][k])f[i]|=f[k];
	for(int v=1;v<=n;v++){
		bitset<N> ok;
		ok.set(),ok.reset(v);
		for(int u:F[v])ok&=(f[u]|(bitset<N>(1)<<u));
		for(int p=1;p<=n;p++)if(ok[p])pa[p][v]=1;
	}
	bitset<N> cur;
	cur[1]=1;
	for(int i=1;i<=n;i++)iD[i]=n+1,aD[i]=0;
	for(int d=1;d<=n;d++){
		if(cur.none())break;
		for(int v=1;v<=n;v++)if(cur[v])iD[v]=min(iD[v],d),aD[v]=max(aD[v],d);
		bitset<N> nxt;
		for(int p=1;p<=n;p++)if(cur[p])nxt|=pa[p];
		cur=nxt;
	}
	bool ok=1;
	for(int v=1;v<=n;v++)if(iD[v]==n+1){
		ok=0;
		break;
	}
	if(!ok){
		for(int i=1;i<=n;i++)cout<<0;
		return 0;
	}
	for(int v=1;v<=n;v++)L=max(L,iD[v]),R=max(R,aD[v]);
	for(int d=1;d<=n;d++){
		if(L<=d&&d<=R)cout<<1;
		else cout<<0;
	}
	return 0;
}
