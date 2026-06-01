#include<bits/stdc++.h>
using namespace std;
int dp[200005];
int n,v;
int ans;
int vi;
int main()
{
    cin>>v>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>vi;
        for(int j=v;j>=vi;j--)
        {
            dp[j]=max(dp[j],dp[j-vi]+vi);
        }
    }
    cout<<v-dp[v];
    return 0;
}