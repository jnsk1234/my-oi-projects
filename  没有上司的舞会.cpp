#include<bits/stdc++.h>
using namespace std;
vector<long long> a[6005];
long long dp[6005][3];
long long s[6005];
long long n,m;
long long x,y;
long long root;
long long p[6005];
// 1不 2来
void dfs(long long k)
{
    // cout<<1;
    for(long long i:a[k])
    {
        dfs(i);
        dp[k][1]+=max(dp[i][2],dp[i][1]);
        dp[k][2]+=dp[i][1];
    }
    dp[k][2]+=s[k];
}
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>s[i];   
    }
    for(long long i=1;i<=n-1;i++)
    {
        cin>>y>>x;
        a[x].push_back(y);
        p[y]++;
    }
     for(long long i=1;i<=n;i++)
    {
        if(p[i]==0)
        {
            root=i;
        }
    }
    dfs(root);
    cout<<max(dp[root][1],dp[root][2]);
    return 0;
}