#include<bits/stdc++.h>
using namespace std;
long long dp[300005];
long long v[300005],s[300005],w[00005];
long long vi,si,wi;
long long n,V;
long long cnt=1;
int main()
{
    cin>>n>>V;
    for(long long i=1;i<=n;i++)
    {
        cin>>wi>>vi>>si; 
        long long xi=1;
        while(xi<=si)
        {
            v[cnt]=xi*vi;
            w[cnt]=xi*wi;
            si-=xi;
            xi*=2;
            cnt++;
        }
        if(si!=0)
        {
            v[cnt]=si*vi;
            w[cnt]=si*wi;
            cnt++;
        }
    }
    for(long long i=1;i<=cnt;i++)
    {
        for(long long j=V;j>=v[i];j--)
        {
            dp[j]=max(dp[j-v[i]]+w[i],dp[j]);
        }
    }
    cout<<dp[V];
   return 0;
}