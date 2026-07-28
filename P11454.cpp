#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];//1 L 2 R 3 U 4 D
// int vis[1005][1005];//是否访问
int dis[1005][1005];//1 good 2 bad
int dr[200005][3];
vector<int> ans;
char ch;
int cnt;
int n,q;
bool p(int x,int y)
{
    return x>=1&&y>=1&&x<=n&&y<=n;
}
void dfs(int x,int y)
{
    int nx,ny;
    for(int i=1;i<=4;i++)
    {
        if(i==1)
        {
            nx=x;
            ny=y+1;
        }
        if(i==2)
        {
            nx=x;
            ny=y-1;
        }
        if(i==3)
        {
            nx=x+1;
            ny=y;
        }
        if(i==4)
        {
            nx=x-1;
            ny=y;
        }
        if(p(nx,ny)==0)
        {
            continue;
        }
        if(dis[nx][ny] != -1) 
        {
            continue; 
        }
        if(a[nx][ny] == 0 || a[nx][ny] == i) {
            dis[nx][ny] = 1;
            dfs(nx, ny);
        }
    }
}
void dfs2(int x,int y)
{
    int nx,ny;
    for(int i=1;i<=4;i++)
    {
        if(i==1)
        {
            nx=x;
            ny=y+1;
        }
        if(i==2)
        {
            nx=x;
            ny=y-1;
        }
        if(i==3)
        {
            nx=x+1;
            ny=y;
        }
        if(i==4)
        {
            nx=x-1;
            ny=y;
        }
        if(p(nx,ny)==0)
        {
            continue;
        }
        if(dis[nx][ny] != 0) 
        {
            continue; 
        }
        if(a[nx][ny] == 0 || a[nx][ny] == i) {
            dis[nx][ny] = 1;
            cnt++;
            dfs2(nx, ny);
        }
    }
}
int main()
{
    memset(dis, -1, sizeof(dis));
    cin>>n>>q;
    for(int i=1;i<=q;i++)
    {
        cin>>dr[i][1]>>dr[i][2]>>ch;
        if(ch=='L')
        {
            a[dr[i][1]][dr[i][2]]=1;
        }
        if(ch=='R')
        {
            a[dr[i][1]][dr[i][2]]=2;
        }
        if(ch=='U')
        {
            a[dr[i][1]][dr[i][2]]=3;
        }
        if(ch=='D')
        {
            a[dr[i][1]][dr[i][2]]=4;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(a[1][i]==3)
        {
            dis[1][i]=1;
        }
        if(a[n][i]==4)
        {
            dis[n][i]=1;
        }
    }
    for(int i=1;i<=n;i++){
        if(a[1][i]==0) {  dis[1][i]=1; } 
        if(a[n][i]==0) {  dis[n][i]=1; }
        if(a[i][1]==0) { dis[i][1]=1; }
        if(a[i][n]==0) {  dis[i][n]=1; }
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i][1]==1)
        {

            dis[i][1]=1;
        }
        if(a[i][n]==2)
        {

            dis[i][n]=1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(dis[i][j]==1)
            {
                dfs(i,j);
            }
        }
    }
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            if (dis[i][j] == -1) dis[i][j] = 0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(dis[i][j]==1)
            {
                cnt++;
            }
        }
    }
    ans.insert(ans.begin(),n*n-cnt);
    for(int i=q;i>=2;i--)
    {
        int x=dr[i][1],y=dr[i][2],flag=0;
        a[x][y]=0;
        if(dis[x][y]==0)
        {
            if((p(x,y+1)==0||dis[x][y+1])||(p(x,y-1)==0||dis[x][y-1])||(p(x+1,y)==0||dis[x+1][y])||(p(x-1,y)==0||dis[x-1][y])){
                cnt++;
                dis[x][y]=1;
                dfs2(x,y);
            }
        }
        ans.insert(ans.begin(),n*n-cnt);
    }
    for(auto i:ans)
    {
        cout<<i<<endl;
    }
    return 0;
}