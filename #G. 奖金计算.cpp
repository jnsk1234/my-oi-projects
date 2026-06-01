#include<bits/stdc++.h>
using namespace std;
long long t;
void dag()
{
    long long n=0,m=0;
    long long x=0,y=0;
    long long cnt=0;
    long long cnt1=100;
    vector<long long> a[10010];
    vector<long long> ans;
    queue<long long> q;
    long long in[10010]={0};
    long long dp[10010]={0};
    long long ans1=0;
    cin>>n>>m;
    for(long long i=1;i<=m;i++)
    {
        cin>>x>>y;
        in[x]++;
        a[y].push_back(x);
    }
    for(long long i=1;i<=n;i++)
    {
        if(in[i]==0)
        {
            dp[i]=100;
            q.push(i);
        }
    }
    while(!q.empty())
    {
        auto h=q.front();
        q.pop();
        cnt++;
        ans.push_back(h);
        for(auto i:a[h]){
            dp[i]=max(dp[h]+1,dp[i]);
            in[i]--;
            if(in[i]==0)
            {
                q.push(i);
            }
        }
    }
    if(cnt==n)
    {
        for(int i=1;i<=n;i++)
        {
            ans1+=dp[i];
        }
        cout<<ans1<<endl;
    }else{
        cout<<"impossible"<<endl;
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        dag();
    }
    return 0;
}