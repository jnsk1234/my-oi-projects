#include<bits/stdc++.h>
using namespace std;
int a[20][20];
int dp[20][20];
int f[20][20];
int n,m;
vector<pair<int,int>> ass;
bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(a.first==b.first)
    {
        return a.second<b.second;
    }
    return a.first<b.first;
}
void print(int x,int y)
{
    if(x==0)
    {
        return ;
    }
    // cout<<x<<' '<<f[x][y]<<endl;
    print(x-1,y-f[x][y]);
    ass.push_back({x,f[x][y]});
    //cout<<x<<' '<<f[x][y]<<endl;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            for(int k=0;k<=j;k++)
            {
                if(dp[i-1][j-k]+a[i][k]>=dp[i][j])
                {
                    f[i][j]=k;
                }
                dp[i][j]=max(dp[i-1][j-k]+a[i][k],dp[i][j]);
                // cout<<dp[i-1][j-k]+a[i][k]<<' ';
            }
            // c/out<<endl;
        }
    }
    cout<<dp[n][m];
    cout<<endl;
    print(n,m);
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=m;j++)
    //     {
    //         cout<<f[i][j]<<' ';
    //     }
    //     cout<<endl;
    // }
    sort(ass.begin(),ass.end(),cmp);
    for(auto i:ass)
    {
        cout<<i.first<<' '<<i.second<<endl;
    }
    return 0;
}