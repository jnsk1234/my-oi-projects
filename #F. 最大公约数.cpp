#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[2005][2005];
long long vis[2005][2005];
struct node{
    long long x,y,dep;
};
long long dx[]={0,1,-1,0};
long long dy[]={1,0,0,-1};
long long rx,ry;
queue<node> q;
void bfs(long long x,long long y)
{
    q.push({x,y,0});
    long long s=a[x][y];
    if(a[x][y]==1)
    {
        cout<<0;
        exit(0);
    }
    while(!q.empty())
    {
        auto t=q.front();
        q.pop();
        for(long long i=0;i<4;i++)
        {
            long long nx=t.x+dx[i];
            long long ny=t.y+dy[i];
            if(nx<=n&&ny<=m&&nx>=1&&ny>=1&&vis[nx][ny]==0)
            {
                vis[nx][ny]=1;
                s=__gcd(s,a[nx][ny]);
                if(s==1)
                {
                    cout<<t.dep+1;
                    exit(0);
                }else{
                    q.push({nx,ny,t.dep+1});
                }
            }
        }
    }
    cout<<-1;
}
int main()
{
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
    {
        for(long long j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    cin>>rx>>ry;
    bfs(rx,ry);
    return 0;
}