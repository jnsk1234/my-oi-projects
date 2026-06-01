#include<bits/stdc++.h>
using namespace std;
vector<vector<pair<long long,long long>>> a(1505);
long long in[1505];
long long n,m;
long long u,v,w;
queue<long long> q;
vector<long long> ans;
long long dp[1505];
long long c,r;
long long ans1;
long long inf=-1e18;
void dag()
{
    while(!q.empty())
    {
        auto h=q.front();
        q.pop();
        ans.push_back(h);
        for(auto i:a[h])
        {
            if(dp[h]!=inf)
                dp[i.first]=max(dp[i.first],dp[h]+i.second);
            in[i.first]--;
            if(in[i.first]==0)
            {
                q.push(i.first);
            }
        }
    }
}
int main()
{
    for(int i=1;i<=1503;i++)
    {
        dp[i]=inf;
    }
    dp[1]=0;
    cin>>n>>m;
    for(long long i=1;i<=m;i++)
    {
        cin>>u>>v>>w;
        a[u].push_back({v,w});
        in[v]++;
    }
    for(long long i=1;i<=n;i++)
    {
        if(in[i]==0)
        {
            q.push(i);
        }
    }
    dag();
    if(dp[n] == inf) {
        cout << -1 << endl;
    } else {
        cout << dp[n] << endl;
    }
    return 0;
}