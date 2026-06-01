#include<bits/stdc++.h>
using namespace std;
int dp[2005];
// int vi,si,wi;
int v[10005],s[10005],w[10005];
int vi,si,wi;
int n,V;
int cnt=1;
int main()
{
    cin>>n>>V;
    for(int i=1;i<=n;i++)
    {
        cin>>vi>>wi>>si; 
        int xi=1;
        while(xi<si)
        {
            v[cnt]=xi*vi;
            w[cnt]=xi*wi;
            si-=xi;
            xi*=2;
            // cout<<xi;
            cnt++;
        }
        if(si!=0)
        {
            v[cnt]=si*vi;
            w[cnt]=si*wi;
            cnt++;
        }
    }
    // cout<<cnt;
    // for(int i=1;i<=cnt;i++)
    // {
    //     cout<<v[i]<<' '<<w[i]<<endl;
    // }
    for(int i=1;i<=cnt;i++)
    {
        for(int j=V;j>=v[i];j--)
        {
            dp[j]=max(dp[j-v[i]]+w[i],dp[j]);
        }
    }
    cout<<dp[V];
    return 0;
}