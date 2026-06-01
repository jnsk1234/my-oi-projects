#include<bits/stdc++.h>
using namespace std;
int a[25][25],s[25][25],ans=1e9,n,m,k;
int main()
{
    cin>>n>>m>>k;
    for(long long i=1;i<=n;i++)
    {
        for(long long j=1;j<=m;j++)
        {
            cin>>a[i][j];
            s[i][j]=a[i][j]+s[i][j-1]+s[i-1][j]-s[i-1][j-1];
        }
    }
    for(int x=1;x<=n;x++)
    {
        for(int y=1;y<=m;y++)
        {
            for(int xx=x;xx<=n;xx++)
            {
                for(int yy=y;yy<=m;yy++)
                {
                    if((s[xx][yy]-s[xx][y-1]-s[x-1][yy]+s[x-1][y-1])>=k)
                    {
                        ans=min(ans,(xx-x+1)*(yy-y+1));
                    }
                }
            }
        }
    }
    cout<<ans;
    return 0;
}