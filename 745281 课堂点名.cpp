#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
int n,m,x,y;
int ans1,ans2;
int main()
{
    cin>>n>>m>>x>>y;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=n;i>x;i--)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]==1)
            {
                ans1++;
                // ans2++;
            }
        }
    }
        for(int j=m;j>=1;j--)
        {
            if(a[x][j]==1)
            {
                ans2++;
            }
        }
        cout<<ans1+1<<' '<<ans2+ans1;
    return 0;
}