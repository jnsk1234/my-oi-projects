#include<bits/stdc++.h>
using namespace std;
int dx[4]={0,1,-1,0};
int dy[4]={1,0,0,-1};
int a[1005][1005];
int vis[1005][1005];
struct node{
    int x,y,dep,hp;
};
int cx,cy,jx,jy;
queue<node> q;
int n;
int hp=6;
int m;
void bfs(int x,int y)
{
     vis[x][y] = 6;
    q.push({x,y,0,6});
    while(!q.empty())
    {
        node t=q.front();
        q.pop();
        if(t.x==jx&&t.y==jy)
        {
            cout<<t.dep;
            exit(0);
        }
        if(t.hp == 1) {
            continue;
        }
        for(int i=0;i<4;i++)
        {
            int nx=t.x+dx[i];
            int ny=t.y+dy[i];
            if(nx<=n&&ny<=m&&nx>=1&&ny>=1&&a[nx][ny]!=0)
            {
                int nhp=t.hp-1;
                
                if(a[nx][ny]==4)
                {
                    nhp=6;
                }
                if(nhp > vis[nx][ny]) {
                    vis[nx][ny] = nhp;
                    q.push({nx, ny, t.dep + 1, nhp});
                }
                
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==2)
            {
                cx=i,cy=j;
            }
            if(a[i][j]==3)
            {
                jx=i,jy=j;
            }
        }
    }
    bfs(cx,cy);
    cout<<-1;
    return 0;
}