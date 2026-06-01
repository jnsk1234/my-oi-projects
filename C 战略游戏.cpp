#include<bits/stdc++.h>
using namespace std;
vector<long long > a[10005];
long long dp[10005][5];
long long n,x,y,z,h;
void dfs(long long x,long long y)
{
    dp[x][1]=1;
    for(long long i:a[x])
    {
        if(i==y){
            continue;
        }
        dfs(i,x);
        dp[x][1]+=min(dp[i][1],dp[i][0]);
        dp[x][0]+=dp[i][1];
    }
}
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>x>>y;
        for(long long j=1;j<=y;j++)
        {
            cin>>z;
            a[x].push_back(z);
            a[z].push_back(x);
        }
    }
    dfs(0,-1);
    cout<<min(dp[0][1],dp[0][0]);
    return 0;
}