#include<bits/stdc++.h>
using namespace std;
int n,m,c[1005][1005],d[1005][1005],k,x,y,xx,yy,q;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y>>xx>>yy;
        c[x][y]+=1;
        c[x][yy+1]-=1;
        c[xx+1][y]-=1;
        c[xx+1][yy+1]+=1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            d[i][j]=c[i][j]+d[i][j-1]+d[i-1][j]-d[i-1][j-1];
        }
    }for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<d[i][j]<<' ';
        }
        cout<<"\n";
    }
    return 0;
}