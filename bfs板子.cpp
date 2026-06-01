#include<bits/stdc++.h>
using namespace std;
struct node{
    int x,y,dep;
};
queue<node> q;
int n,m;
char a[105][105];
int dx[]= {1,0,-1,0};
int dy[]= {0,1,0,-1};
void bfs(int x,int y){
    a[x][y]='#';
    q.push({x,y,0});
    while(!q.empty())
    {
        node t=q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            int nx=t.x+dx[i];
            int ny=t.y+dy[i];
            if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&a[nx][ny]=='.')
            {
                a[nx][ny]='#';
                q.push({nx,ny,t.dep+1}); 
                if(nx==n&&ny==m)
                {
                    cout<<"Yes";
                    exit(0);
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
        }
    }
    bfs(1,1);
    cout<<"No";
}
/*
10 10
0 1 0 0 0 1 0 0 0 0
0 1 0 1 0 1 0 1 1 0
0 1 0 1 0 0 0 0 0 0
0 0 0 1 1 1 1 1 0 1
1 0 1 0 0 0 0 1 0 0
0 0 1 0 1 1 0 1 0 1
0 1 1 0 0 1 0 1 0 0
0 0 0 0 1 1 0 1 1 0
1 1 1 0 1 0 0 0 0 0
0 0 0 0 1 0 1 1 1 0
*/
//(1,1)→(2,1)→(3,1)→(4,1)→(4,2)→(4,3)→(5,3)→(6,3)→(7,3)→(7,4)→(7,5)→(8,5)→(9,5)→(10,5)→(10,6)→(10,7)→(10,10)