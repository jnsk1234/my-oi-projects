#include<bits/stdc++.h>
using namespace std;
int n,mm;
int w,po,p;
int dp[100005];
int main()
{
    cin>>mm>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>w>>p;
        for(int j=w;j<=mm;j++)
        {
            dp[j]=max(dp[j],dp[j-w]+p);
        }
    }
    cout<<dp[mm];
    return 0;
}