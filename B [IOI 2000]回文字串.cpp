#include<bits/stdc++.h>
using namespace std;
string s;
int n;
int dp[1005][1005];
int main()
{
    cin>>s;
    // s=' '+s;
    n=s.size();
    for(int len=1;len<=n;len++)
    {
        for(int i=0;i+len-1<n;i++)
        {
            int j=i+len-1;
            for(int k=i;k<j;k++)
            {
                if(s[i]==s[j])
                {
                    dp[i][j]=dp[i+1][j-1];
                }else{
                    dp[i][j]=min(dp[i][j-1]+1,dp[i+1][j]+1);
                }
            }
        }
    }
    cout<<dp[0][n-1];
    return 0;
}