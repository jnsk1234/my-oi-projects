#include<bits/stdc++.h>
using namespace std;
int m;
int x,y,t;
int dx[4]={0,1,-1,0};
int dy[4]={1,0,0,-1};
struct node{
    int x,y,dep;
};
int a[305][305];
int vis[305][305];
void bfs(int x,int y)
{
    queue<node> q;
    q.push({x,y,0});
    vis[x][y]=1;
    while(!q.empty())
    {
        node t=q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            int nx=t.x+dx[i];
            int ny=t.y+dy[i];
            if(nx>=0&&ny>=0&&vis[nx][ny]==0&&nx<=305&&ny<=305&&(a[nx][ny]>t.dep+1||a[nx][ny]==-1))
            {
                q.push({nx,ny,t.dep+1});
                vis[nx][ny]=1;
                if(a[nx][ny]==-1)
                {
                    cout<<t.dep+1;
                    exit(0);
                }
            }
        }
    }
    cout<<-1;
}
int main()
{
    cin>>m;
    if(m==0)
    {
        cout<<0;
        return 0;
    }
    memset(a,-1,sizeof(a));
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y>>t;
        if(x==0&&y==0&&t==0)
        {
            cout<<-1;
            return 0;
        }
        if(a[x][y]==-1||t<a[x][y])
            a[x][y]=t;
        for(int j=0;j<4;j++)
        {
            int nx=x+dx[j];
            int ny=y+dy[j];
            if(nx>=0&&ny>=0&&nx<=305&&ny<=305)
            {
                if(a[nx][ny]==-1||t<a[nx][ny])
                    a[nx][ny]=t;
            }
        }

    }
    bfs(0,0);
    return 0;
}