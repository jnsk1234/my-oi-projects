#include<bits/stdc++.h>
using namespace std;
int s,n,d;
int a[10005],b[10005];
int dp[1000005];

int main()
{
    cin>>s>>n>>d;
    for(int i=1;i<=d;i++)
    {
        cin>>a[i]>>b[i];
        a[i]/=1000;
    }
        for(int j=1;j<=n;j++)
        {
            for(int i=1;i<=d;i++)
            {
                for(int k=a[i];k<=s/1000;k++)
                {
                    dp[k]=max(dp[k-a[i]]+b[i],dp[k]);
                }
                // s+=dp[s/1000];
                // cout<<s<<endl;
            }
            s+=dp[s/1000];
        }

    cout<<s;
    return 0;
}