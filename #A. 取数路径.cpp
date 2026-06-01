#include<bits/stdc++.h>
using namespace std;
long long a[105];
long long n;
long long a1,a2;
long long dp[105];
long long r[105],l;
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    dp[1]=a[1];
    dp[2]=max(dp[1],a[2]);
    for(long long i=3;i<=n;i++)
    {
        dp[i]=max(dp[i-2]+a[i],dp[i-1]);
    }
    cout<<dp[n]<<endl;
    long long m=dp[n];
    for(long long i=n;i>=1;i--)
    {
        while(i>=1&&dp[i-1]==m)
        {
            i--;
        }
        r[++l]=i;
        m-=a[i];
        if(m==0) break;
    }
    for(long long i=l;i>1;i--)
    {
        cout<<r[i]<<"->";
    }
    cout<<r[1];
    return 0;
}