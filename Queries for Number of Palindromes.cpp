#include<bits/stdc++.h>
using namespace std;
string s;
long long n;
int dp[5010][5010][4];
long long q,l,r;
int main()
{
    cin>>s;
    // s=' '+s;
    n=s.size();
    for(long long i=0;i<n;i++)
    {
        dp[i][i][0]=1;
        dp[i][i][1]=1;
    }
    for(long long i=0;i<n-1;i++)
    {
        long long j=i+1;
        if(s[i]==s[j])
        {
            dp[i][j][0]=1;
        } 
        else
        {
            dp[i][j][0]=0;
        }
        dp[i][j][1]=2+dp[i][j][0];
    }
    for(long long len=3;len<=n;len++)
    {
        for(long long i=0;i+len-1<n;i++)
        {
            long long j=i+len-1;
            if(s[i]==s[j]&&dp[i+1][j-1][0]==1)
            {
                dp[i][j][0]=1;
            }else{
                dp[i][j][0]=0;
            }
            dp[i][j][1]=dp[i+1][j][1]+dp[i][j-1][1]-dp[i+1][j-1][1]+dp[i][j][0];
        }
    }
    cin>>q;
    while(q--)
    {
        cin>>l>>r;
        cout<<dp[l-1][r-1][1]<<"\n";
    }
    return 0;
}
