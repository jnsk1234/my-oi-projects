#include<bits/stdc++.h>
using namespace std;
vector<int> a[1005];
int n;
int u,v,ans;
int gs;
void dfs(int x,int d)
{
    gs++;
    if(a[x].size()==0)
    {
        return ;
    }
    else{
        for(int i:a[x])
        {
            dfs(i,d+1);
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        cin>>u>>v; 
        a[u].push_back(v);
    }
    dfs(1,1);
    for(int i=1;i<=n;i++)
    {
        gs=0;
        dfs(i,1);
        ans+=gs;
    }
    cout<<ans;
    return 0;
}