#include<bits/stdc++.h>
using namespace std;
long long n,A,B,C;
long long x[100000+5];
long long dp[100000+5];
int main()
{
    cin>>n>>A>>B>>C;
    for (int i = 1; i <= n; i++){
	    int tmp = ((long long)A * i * i + B * i + C) % 20000;
	    x[i] = tmp - 10000;
    }
    //dp[0]=0;
    dp[1]=x[1];
    //dp[2]=dp[1]+x[2];
    //dp[3]=max(dp[2]+x[3],dp[1]+x[3]);
    for (int i = 2; i <= n+1; i++){
	    dp[i]=max(dp[i-1]+x[i],dp[i-2]+x[i]);
    }
    cout<<dp[n+1];
    return 0;
}