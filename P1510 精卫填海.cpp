#include<bits/stdc++.h>
using namespace std;
int v,n,c;
int vi,ci;
int dp[10005];
int main()
{
    cin>>v>>n>>c;
    for(int i=1;i<=n;i++)
    {
        cin>>vi>>ci;
        for(int j=c;j>=ci;j--)
        {
            dp[j]=max(dp[j],dp[j-ci]+vi);
        }
    }
    for(int i=1;i<=c;i++)
    {
        if(dp[i]>=v)
        {
            cout<<c-i;
            return 0;
        }
    }
    cout<<"Impossible";
    return 0;
}