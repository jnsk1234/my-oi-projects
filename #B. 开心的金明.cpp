#include<bits/stdc++.h>
using namespace std;
int n,mm;
int w,po,p;
int dp[1000000005];
int main()
{
    cin>>mm>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>w>>po;
        p=po*w;
        for(int j=mm;j>=w;j--)
        {
            dp[j]=max(dp[j],dp[j-w]+p);
        }
    }
    cout<<dp[mm];
    return 0;
}