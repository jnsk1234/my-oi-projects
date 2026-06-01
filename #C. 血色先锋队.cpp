#include<bits/stdc++.h>
using namespace std;
int n,m,a,b;
int f[505][505];
bool vis[505][505];
struct node{
    int x,y,dep;
};
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
void bfs()
{
    queue<node> q;
    for(int i=1;i<=a;i++)
    {
        int xxx,yyy;
        cin>>xxx>>yyy;
        q.push({xxx,yyy,0});
        f[xxx][yyy]=0;
        vis[xxx][yyy]=1;
    }
    while(!q.empty())
    {
        node t=q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            int nx=t.x+dx[i];
            int ny=t.y+dy[i];
            if(vis[nx][ny]==0&&nx>=1&&ny>=1&&nx<=n&&ny<=m)
            {
                vis[nx][ny]=1;
                q.push({nx,ny,t.dep+1});
                f[nx][ny]=min(t.dep+1,f[nx][ny]);
            }
        }
    }

}
int main()
{
    cin>>n>>m>>a>>b;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            f[i][j]=2e9;
        }
    }
    bfs();
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=m;j++)
    //     {
    //         cout<<f[i][j]<<' ';
    //     }
    //     cout<<endl;
    // }
    for(int i=1;i<=b;i++)
    {
        int x,y;
        cin>>x>>y;
        cout<<f[x][y]<<endl;
    }
    return 0;
}