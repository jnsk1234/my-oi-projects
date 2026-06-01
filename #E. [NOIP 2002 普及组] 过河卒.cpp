#include<bits/stdc++.h>
using namespace std;
long long dp[35][35];
long long b[35][35];
long long n,m,n1,m1;
long long dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
long long dy[] = {2, 1, -1, -2, -2, -1, 1, 2};
int main()
{
    cin>>n>>m>>n1>>m1;
    b[n1][m1]=1;
    for(long long i=0;i<8;i++)
    {
        long long nx=n1+dx[i];
        long long ny=m1+dy[i];
        if(nx>=0&&nx<=n&&ny>=0&&ny<=m)
            b[nx][ny]=1;
    }
    for(long long i=0; i<=m; i++) {
		if(b[0][i]==1) {
			break;
		}
		dp[0][i]=1;
	}
	for(long long i=0; i<=n; i++) {
		if(b[i][0]==1) {
			break;
		}
		dp[i][0]=1;
	}
    for(long long i=1;i<=n;i++)
    {
        for(long long j=1;j<=m;j++)
        {
            if(b[i][j]==1)
            {
                dp[i][j]=0;
            }
            else{
                dp[i][j]=dp[i][j-1]+dp[i-1][j];
            }
        }
    }
    cout<<dp[n][m]<<endl;
    // for(long long i=0;i<=n;i++)
    // {
    //     for(long long j=0;j<=m;j++)
    //     {
    //         cout<<dp[i][j]<<' ';
    //     }
    //     cout<<endl;  
    // }
     return 0;
}