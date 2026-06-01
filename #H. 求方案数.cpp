#include<bits/stdc++.h>
using namespace std;
int n,V,v,w;
long long dp[10005],f[10005];
long long ans;
int main()
{

    for(int i=0;i<=10000;i++)
    {
        f[i]=1;
    }
    cin>>n>>V;
    // for(int i=1;i<=1000;i++)
    // {
    //     cout<<f[i];
    // }
    for(long long i=1;i<=n;i++)
    {
        cin>>v>>w;
        for(long long j=V;j>=v;j--)
        {
            int cnt=0;
            int ma=max(dp[j],dp[j-v]+w);
            if(dp[j]==ma)
            {
                cnt=f[j]%10000000007;
            }
            if(dp[j-v]+w==ma)
            {
                cnt+=f[j-v]%10000000007;
            }
            dp[j]=ma;
            f[j]=cnt%10000000007;
        } 
    }
    cout<<f[V]%10000000007;
    // cout<<dp[V];
    return 0;
}