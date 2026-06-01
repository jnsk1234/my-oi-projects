#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<vector<int>>g;
vector<int>dp;
int dfs(int u){
    if(dp[u]!=-1)return dp[u];
    dp[u]=0;
    for(int v:g[u])dp[u]=max(dp[u],1+dfs(v));
    return dp[u];
}
int main(){
    cin>>n>>m;
    g.resize(n+1);
    for(int i=0,u,v;i<m;i++){
        cin>>u>>v;
        g[u].push_back(v);
    }
    for(int i=2;i<=n;i++)g[1].push_back(i);
    dp.assign(n+1,-1);
    int mx=dfs(1);
    int dmin=1+mx;
    string s;
    for(int i=1;i<=n;i++)s+=(i>=dmin?'1':'0');
    cout<<s<<endl;
}