#include<bits/stdc++.h>
using namespace std;
long long n,m,c;
long long a[1005][1005],s[1005][1005],ans=0,ax,ay;
int main()
{
    cin>>n>>m>>c;
    for(long long i=1;i<=n;i++)
    {
        for(long long j=1;j<=m;j++)
        {
            cin>>a[i][j];
            s[i][j]=a[i][j]+s[i][j-1]+s[i-1][j]-s[i-1][j-1];
        }
    }
    for(long long i=1;i<=n-c+1;i++)
    {
        for(long long j=1;j<=m-c+1;j++)
        {
            if((s[i+c-1][j+c-1]-s[i+c-1][j-1]-s[i-1][j+c-1]+s[i-1][j-1])>ans)
            {
                ans=s[i+c-1][j+c-1]-s[i+c-1][j-1]-s[i-1][j+c-1]+s[i-1][j-1];
                ax=i;
                ay=j;
            }
        }
    }
    cout<<ax<<' '<<ay;
    return 0;
}