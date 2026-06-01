#include<bits/stdc++.h>
using namespace std;
long long dp[100005][5];
//1选 2不
long long b[100005];
vector<long long> a[100005];
long long n,u,v,root;
void dfs(long long x)
{
    for(long long i:a[x])
    {
        dfs(i);
        dp[x][1]+=dp[i][2];
        dp[x][2]+=max(dp[i][1],dp[i][2]);
    }
    dp[x][1]+=b[x];
}
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>u>>v>>b[v];

        a[u].push_back(v);
        if(u==0)
        {
            root=v;
        }
    }
    dfs(root);
    cout<<max(dp[root][1],dp[root][2]);
    return 0;
}