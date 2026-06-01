#include<bits/stdc++.h>
using namespace std;
int fa[1000005];
int n,m,z,x,y;
set<int> s;
int find(int x)
{
    if(fa[x]==x) return x;
    return fa[x]=find(fa[x]);
}
void ma(int x,int y)
{
    int zx=find(x);
    int zy=find(y);
    if(zx!=zy)
    {
        fa[zy]=zx;
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        fa[i]=i;
    }
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        ma(x,y);
    }
    for(int i=1;i<=n;i++)
    {
        // cout<<fa[i]<<' ';
        s.insert(find(i));
    }
    cout<<s.size();
    return 0;
}