#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[50][50];
int main()
{
    cin>>n>>m;
    a[0][1]=1;
    a[0][n+1]=1;
    for(long long i=1;i<=m;i++)
    {
        for(long long j=1;j<=n+1;j++)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j+1];
        }
        a[i][1]=a[i][n+1]=a[i][1]+a[i][n+1];
    }
    cout<<a[m][1];
    return 0;
}