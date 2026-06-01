#include<bits/stdc++.h>
using namespace std;
int a[10];
int dp[1005];
int ans;
int v1[10]={0,1,2,3,5,10,20};
int cnt=1;
int v[1005];
int main()
{
    for(int i=1;i<=6;i++)
    {
        cin>>a[i];
        for(int j=1;j<=a[i];j++)
        {
            v[cnt]=v1[i];
            cnt++;
        }
    }
    dp[0]=1;
    for(int i=1;i<=cnt;i++)
    { 
        for(int j=1000;j>=v[i];j--)
        {
            dp[j]=min(1,dp[j-v[i]]+dp[j]);
        }
    }
    // for(int i=1;i<=6;i++)
    // {
    //     for(int j=1;j<=a[i];j++)
    //     {
    //         for(int k=1000;k>=v[i];k--)
    //         {
    //             // dp[k]+=dp[k-i];
    //             dp[k]=min(1,dp[k-i]+dp[k]);
    //         }
    //     }
    // }
    for(int i=1;i<=1000;i++)
    {
        ans+=dp[i];
    //    cout<<dp[i]<<' ';
    }
    cout<<"Total="<<ans;
    return 0;
}