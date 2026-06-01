#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long x,y;
struct A{
    long long na,x,y;
};
A d[1005];
vector<long long> a[1005];
double jg[1005][1005];
long long s,t;
double dp[1005];
long long vis[1005];
queue<long long> q;
void bfs(long long s)
{
    q.push(s);
    while(!q.empty())
    {
        auto h=q.front();
        q.pop();
        if(h==t)
        {
            return ;
        }
        for(long long i=1;i<=n;i++)
        {
            if(jg[h][i]!=1e9)
            {
                q.push(i);
                dp[i]=min(dp[i],dp[h]+jg[h][i]);
            }
        }
    }
}
long long main()
{
    memset(dp,0x3f,sizeof(dp));
    for(long long i=1;i<=105;i++)
    {
        for(long long j=1;j<=105;j++)
        {
            jg[i][j]=1e9;
        }
    }
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        d[i].na=i;
        cin>>d[i].x>>d[i].y;
    }
    cin>>m;
    for(long long i=1;i<=m;i++){
        cin>>x>>y;
        jg[x][y]=double(sqrt((d[x].x-d[y].x)*(d[x].x-d[y].x)+(d[x].y-d[y].y)*(d[x].y-d[y].y)));
        jg[y][x]=double(sqrt((d[x].x-d[y].x)*(d[x].x-d[y].x)+(d[x].y-d[y].y)*(d[x].y-d[y].y)));
    }
    cin>>s>>t;
    dp[s]=0;
    for(long long i=1;i<=n;i++)
    {
        for(long long j=1;j<=n;j++)
        {
            cout<<jg[i][j]<<' ';
        }
        cout<<endl;
    }
    for(long long i=1;i<=n;i++)
    {
        cout<<dp[i]<<' ';
    }
    bfs(s);
    cout<<dp[t];
    return 0;
}