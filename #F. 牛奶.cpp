#include<bits/stdc++.h>
using namespace std;
set<int> ans;
int f[25][25][25];
int a,b,c;
void dfs(int x,int y,int z)
{
    if(f[x][y][z]==1)
    {
        return ;
    }
    f[x][y][z]=1;
    if(x==0)
    {
        ans.insert(z);
    }
        
    if(x<b-y)
    {
        dfs(0,y+x,z);
    }
    if(x>=b-y)
    {
        dfs(x-(b-y),b,z);
    }
    //a-b;
    if(y<a-x)
    {
        dfs(x+y,0,z);
    }
    if(y>=a-x)
    {
        dfs(a,y-(a-x),z);
    }
    //b-a
    if(y<c-z)
    {
        dfs(x,0,z+y);
    }
    if(y>=c-z)
    {
        dfs(x,y-(c-z),c);
    }
    //b-c;
    if(z<b-y)
    {
        dfs(x,z+y,0);
    }
    if(z>=b-y)
    {
        dfs(x,b,z-(b-y));
    }
    //c-b
    if(x<c-z)
    {
        dfs(0,y,z+x);
    }
    if(x>=c-z)
    {
        dfs(x-(c-z),y,c);
    }
    //a-c
    if(z<a-x)
    {
        dfs(x+z,y,0);
    }
    if(z>=a-x)
    {
        dfs(a,y,z-(a-x));
    }
    f[x][y][z]==0;
    //c-a
}
int main()
{
    cin>>a>>b>>c;
    dfs(0,0,c);
    for(auto i:ans){
        cout<<i<<' ';
    }
    
    return 0;
}