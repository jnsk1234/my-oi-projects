#include<bits/stdc++.h>
using namespace std;
vector<int> a[1005];
int n,ans;
int u,v;
void dfs(int x,int d)
{
    ans=max(ans,d);
    if(a[x].size()==0)
    {
        return ;
    }else{
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
    cout<<ans;
    return 0;
}