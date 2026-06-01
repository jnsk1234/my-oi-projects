#include<bits/stdc++.h>
using namespace std;
int dp[2005];
int v[10005],s[10005],w[10005];
int v1[10005],s1[10005],w1[10005];
int vi,si,wi;
int n,V;
int cnt=1;
int cnt1=1;
int main()
{
    cin>>n>>V;
    for(int i=1;i<=n;i++)
    {
        cin>>vi>>wi>>si;
        if(si==0)
        {
            v1[cnt1]=vi;
            w1[cnt1]=wi;
            cnt1++;
        }else if(si>0){
            int xi=1;
            while(xi<si)
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
    }
    for(int i=1;i<=cnt;i++)
    {
        for(int j=V;j>=v[i];j--)
        {
            dp[j]=max(dp[j-v[i]]+w[i],dp[j]);
        }
    }
    for(int i=1;i<=cnt1;i++)
    {
        for(int j=v1[i];j<=V;j++)
        {
            dp[j]=max(dp[j-v1[i]]+w1[i],dp[j]);
        }
    }
    cout<<dp[V];
    return 0;
}