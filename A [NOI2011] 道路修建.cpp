#include<bits/stdc++.h>
using namespace std;
long long n;
long long x,y,w1;
long long ans;
struct node{
    long long v,w;
};
vector<node>a[1000005];
long long dp1[1000005];
void dfs(long long x,long long fa)
{
    dp1[x]=1;
    for(auto i:a[x])
    {
        if(i.v==fa)
        {
            continue;
        }
        dfs(i.v,x);
        dp1[x]+=dp1[i.v];
        ans+=(i.w*(abs(dp1[i.v]-(n-dp1[i.v]))));
    }
}
int main()
{
    cin>>n;
    for(long long i=1;i<=n-1;i++)
    {
        cin>>x>>y>>w1;
        a[x].push_back({y,w1});
        a[y].push_back({x,w1});
    }
    dfs(1,-1);
    cout<<ans;
    return 0;
}