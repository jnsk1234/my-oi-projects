#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> c(100005);
int n,m;
int u,v,k;
int ans[100005];
int f[100005];
int o[100005];
int ansn;
void bfs(int x)
{
    queue<int> q;
    q.push(x);
    f[x]=1;
    ans[x]++;
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
                ans[i]++;
            }
        }
    }
}
int main()
{
    // memset(ans,-1,sizeof(ans));
    cin>>k>>n>>m;
    for(int i=1;i<=k;i++)
    {
        cin>>o[i];
    }
    for(int i=1;i<=m;i++)
    {
        cin>>u>>v;
        c[v].push_back(u);
    }
    for(int i=1;i<=k;i++)
    {
        bfs(o[i]);
    }
    for(int i=1;i<n;i++)
    {
        if(ans[i]==k)
        {
            ansn++;
        }
    }
    cout<<ansn;
    return 0;
}