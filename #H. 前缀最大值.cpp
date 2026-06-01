#include<bits/stdc++.h>
using namespace std;
int a[100000+5],dp[100000+5];
int n,x,ans;
int main()
{
    cin>>n>>x;
    a[1]=x;
    for(int i=2;i<=n;i++)
    {
        a[i]=(379*a[i-1]+131)%997;
    }
    //dp[1]=a[1];
    //ans+=dp[1];
    for(int i=1;i<=n;i++)
    {
        dp[i]=max(dp[i-1],a[i]);
        ans+=dp[i];
    }
    cout<<ans;
    return 0;
}