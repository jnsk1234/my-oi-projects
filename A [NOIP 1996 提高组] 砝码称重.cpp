#include<bits/stdc++.h>
using namespace std;
int ap[10]={0,1,2,3,5,10,20};
// int n;
int dp[1005];
int a[10];
int ans;
int main()
{
    dp[0]=1;
    cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6];
    for(int i=1;i<=6;i++)
    {
        for(int j=1000;j>=1;j--)
        {
            for(int k=1;k<=a[i]&&k*ap[i]<=j;k++)
            {
                dp[j]=dp[j-k*ap[i]]+dp[j];
            }
        }
    }
    for(int i=1;i<=1000;i++)
    {
        if(dp[i])
        {
            ans++;
        }
    }
    cout<<"Total="<<ans;
    return 0;
}