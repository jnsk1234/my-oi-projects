#include<bits/stdc++.h>
using namespace std;
int n,m;
int fa[1000005];
int k,a,b;
set<int> s;
int find(int x)
{
    if(fa[x]==x) return x;
    return fa[x]=find(fa[x]);
}
void ma(int x,int y)
{
    int xx=find(x);
    int yy=find(y);
    if(xx!=yy)
    {
        fa[yy]=xx;
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n*m;i++)
    {
        fa[i]=i;
    }    
    cin>>k;
    for(int i=1;i<=k;i++)
    {
        cin>>a>>b;
        ma(a,b);
    }
    for(int i=1;i<=n*m;i++)
    {
        // cout<<fa[i]<<' ';
        s.insert(find(i));
    }
    cout<<s.size();
    return 0;
}