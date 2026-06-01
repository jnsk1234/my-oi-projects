#include<bits/stdc++.h>
using namespace std;
int dx[] = {1, 2, 2, 1, -1, -2, -2, -1, 2, 2, -2, -2};
int dy[] = {2, 1, -1, -2, -2, -1, 1, 2, 2, -2, 2, -2};
struct node{
    int x,y,dep;
};
char a[25][25];
int xx,yy,xxx,yyy;
void bfs(int x,int y)
{
    queue<node> q;
    memset(a,'0',sizeof(a));
    q.push({x,y,1});
    a[x][y]='1';
    while(!q.empty())
    {
        auto t=q.front();
        q.pop();
        for(int i=0;i<12;i++)
        {
            int nx=t.x+dx[i];
            int ny=t.y+dy[i];
            if(a[nx][ny]=='0'&&nx>=1&&ny>=1&&nx<=20&&ny<=20)
            {
                q.push({nx,ny,t.dep+1});
                a[nx][ny]='1';
                if(nx==1&&ny==1)
                {
                    cout<<t.dep<<endl;
                    return;
                }
            }
        }
    }
}
int main()
{
    cin>>xx>>yy>>xxx>>yyy;
    bfs(xx,yy);
    bfs(xxx,yyy);
    return 0;
}