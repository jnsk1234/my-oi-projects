#include<bits/stdc++.h>
using namespace std;
vector<long long> a[100005];
long long dp1[100005];long long dp2[100005];
long long ans=1e9;
long long n,x,y;

void dfs(long long x,long long y)
{
    dp1[x]=1;
    for(auto i:a[x])
    {
        if(i==y)
        {
            continue;
        }
        dfs(i,x);
        dp1[x]+=dp1[i];
        dp2[x]=max(dp2[x],dp1[i]);
    }
    dp2[x]=max(dp2[x],n-dp1[x]);
    ans=min(dp2[x],ans);
}
int main()
{
    cin>>n;
    for(long long i=1;i<=n-1;i++)
    {
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    dfs(1,-1);
    for(long long i=1;i<=n;i++)
    {
        if(ans==dp2[i])
        {
            cout<<i<<' ';
        }
    }
    return 0;
}