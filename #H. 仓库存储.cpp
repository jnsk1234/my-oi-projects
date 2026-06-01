#include<bits/stdc++.h>
using namespace std;
int n,m,c[1005][1005],a[1005][1005],d[1005][1005],k,x,y,xx,yy,q;
int main()
{
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            c[i][j]=a[i][j]-a[i-1][j]-a[i][j-1]+a[i-1][j-1];
        }
    }
    for(int i=1;i<=k;i++)
    {
        cin>>x>>y>>xx>>yy>>q;
        c[x][y]+=q;
        c[x][yy+1]-=q;
        c[xx+1][y]-=q;
        c[xx+1][yy+1]+=q;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            d[i][j]=c[i][j]+d[i][j-1]+d[i-1][j]-d[i-1][j-1];
        }
    }for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<d[i][j]<<' ';
        }
        cout<<"\n";
    }
    return 0;
}