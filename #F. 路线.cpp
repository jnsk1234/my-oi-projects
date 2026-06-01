#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> c(100005);
int n,m;
int u,v;
int ans[100005];
int f[100005];
void bfs(int x)
{
    queue<int> q;
    q.push(x);
    f[x]=1;
    while(!q.empty())
    {
        auto t=q.front();
        q.pop();
        for(auto i:c[t])
        {
            if(f[i]==0)
            {
                q.push(i);
                f[i]=1;
                ans[i]=ans[t]+1;
            }
        }
    }
}
int main()
{
    // memset(ans,-1,sizeof(ans));
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>u>>v;
        c[u].push_back(v);
        c[v].push_back(u);
    }
    bfs(n);
    for(int i=1;i<n;i++)
    {
        if(f[i]==0)
        {
            cout<<-1<<' ';
        }
        else{
            cout<<ans[i]<<' ';
        }
        // cout<<ans[i]<<' ';
    }
    return 0;
}