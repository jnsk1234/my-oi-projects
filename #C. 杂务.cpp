#include<bits/stdc++.h>
using namespace std;
vector<vector<long long>> a(10005);
long long in[10005];
long long jg[10005];
long long dp[10005];
long long n,u,v,k;
queue<long long> q;
vector<long long> ans;
long long ans1;
void dag()
{
    while(!q.empty())
    {
        auto h=q.front();
        q.pop();
        ans.push_back(h);
        for(auto i:a[h])
        {
            in[i]--;
            dp[i]=max(dp[i],jg[i]+dp[h]);
            if(in[i]==0)
            {
                q.push(i);
            }
        }
    }
}
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>v>>k;
        jg[v]=k;
        for(long long j=1;;j++){
            cin>>u;
            if(u==0)
            {break;}
            a[u].push_back(v);
            in[v]++;
        }
    }
    for(long long i=1;i<=n;i++)
    {
        if(in[i]==0)
        {
            q.push(i);
            dp[i]=jg[i];
        }
    }
    dag();
    // for(auto i:ans)
    // {
    //     cout<<i<<" ";
    // }
    //  cout<<"\n";
    // for(long long i=1;i<=n;i++)
    // {
    //     cout<<dp[i]<<' ';
    // }
    // cout<<"\n";
    for(int i=1;i<=n;i++)
    {
        ans1=max(ans1,dp[i]);
    }
    cout<<ans1;
    return 0;
}