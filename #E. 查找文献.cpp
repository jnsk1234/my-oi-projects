#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> c(100005);
vector<pair<int,int>> d;
bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(a.second==b.second)
    {
        return a.first<b.first;
    }
    return a.second<b.second; 
}
int n,m;
int u,v;
int f[100005];
void dfs(int x)
{
    cout<<x<< ' ';
    if(f[x])
    {
        return ;
    }
    f[x]=1;
    for(auto i:c[x])
    {
        if(f[i]==0)
        {
            dfs(i);
        }
    }
}
void bfs(int x)
{
    cout<<x<< ' ';
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
                cout<<i<< ' ';
                q.push(i);
                f[i]=1;
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
        d.push_back({u,v});
    }
    sort(d.begin(),d.end(),cmp);
    for(auto i:d)
    {
        c[i.first].push_back(i.second);
    }
    dfs(1);
    memset(f,0,sizeof(f));
    cout<<endl;
    bfs(1);
    return 0;
}