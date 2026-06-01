#include<bits/stdc++.h>
using namespace std;
int dx[4]={0,1,-1,0};
int dy[4]={1,0,0,-1};
char a[1005][1005];
struct node{
    int x,y,dep;
};
int xx,yy;
queue<node> q;
char c;
int n;
void bfs(int x,int y)
{
    a[x][y]='1';
    q.push({x,y,1});
    while(!q.empty())
    {
        node t=q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            int nx=t.x+dx[i];
            int ny=t.y+dy[i];
            if(a[nx][ny]=='0')
            {
                q.push({nx,ny,t.dep+1});
                a[nx][ny]='1';
                if(nx==xx&&ny==yy)
                {
                    cout<<t.dep;
                    exit(0);
                }
            }
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    int x,y;
    cin>>x>>y>>xx>>yy;
    bfs(x,y);
    return 0;
}