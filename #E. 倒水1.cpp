#include<bits/stdc++.h>
using namespace std;
int f[105][105];
int ans=1e9;
int a,b,c,n;
void dfs(int x,int y,int dep)
{
    if(dep>c||f[x][y]==1)
    {
        return ;
    }
    f[x][y]=1;
    dfs(a,y,dep+1);
    dfs(x,b,dep+1);
    if(x<b-y)
    {
        dfs(0,y+x,dep+1);
    }
    if(x>=b-y)
    {
        dfs(x-(b-y),b,dep+1);
    }
    if(y<a-x)
    {
        dfs(x+y,0,dep+1);
    }
    if(y>=a-x)
    {
        dfs(a,y-(a-x),dep+1);
    }
    dfs(0,y,dep+1);
    dfs(x,0,dep+1);
    ans=min(ans,abs(n-(x+y)));
    f[x][y]=0;
}
int main()
{
    
    cin>>a>>b>>c>>n;
    dfs(0,0,0);    
    cout<<ans;
    return 0;
}