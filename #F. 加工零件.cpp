#include<bits/stdc++.h>
using namespace std;
int n,m;
int jg[10005];
vector<long long> a[10005];
int in[10005];
int x,y;
int dp[10005];
queue<int> q;
int ans1;
vector<int> ans;
void dag()
{
    while(!q.empty())
    {
        auto h=q.front();
        q.pop();
        ans.push_back(h);
        for(auto i:a[h])
        {
            dp[i]=max(dp[i],dp[h]+jg[i]);
            in[i]--;
            if(in[i]==0)
            {
                q.push(i);
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>jg[i];
    }
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        a[x].push_back(y);
        in[y]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(in[i]==0)
        {
            dp[i]=jg[i];
            q.push(i);
        }
    }
    dag();
    for(int i=1;i<=n;i++)
    {
        ans1=max(dp[i],ans1);
    }
    cout<<ans1; 
    return 0;
}