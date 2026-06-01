#include<bits/stdc++.h>
using namespace std;
int inf=1e9;
int dp1[305][305];int dp2[305][305];
int n;
int m[305];
int s[305];
int ans1=1e9,ans2;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>m[i];
        s[i]=m[i]+s[i-1];
    }
    for(int i=n+1;i<=n*2;i++)
    {
        m[i]=m[i-n];
        s[i]=m[i]+s[i-1];
    }
    for(int i=1;i<=n*2;i++)
    {
        for(int j=1;j<=n*2;j++)
        {
            dp1[i][j]=inf;
        }
    }
    for(int i=1;i<=n*2;i++)
    {
        dp1[i][i]=0;
    }
    for(int i=1;i<=n*2;i++)
    {
        dp2[i][i]=0;
    }
    for(int l=1;l<=n*2;l++)
    {
        for(int i=1;i+l-1<=n*2;i++)
        {
            int j=i+l-1;
            for(int k=i;k<j;k++)
            {
                dp1[i][j]=min(dp1[i][j],dp1[i][k]+dp1[k+1][j]+s[j]-s[i-1]);
                dp2[i][j]=max(dp2[i][j],dp2[i][k]+dp2[k+1][j]+s[j]-s[i-1]);
            }
        }
    }
    
    for(int i=1;i<=n;i++)
    {
        ans1=min(ans1,dp1[i][i+n-1]);
        ans2=max(ans2,dp2[i][i+n-1]);
        
    }

    cout<<ans1<<"\n";
    cout<<ans2<<"\n";
    return 0;
}
// 石子合并