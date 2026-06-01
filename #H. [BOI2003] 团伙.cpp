#include<bits/stdc++.h>
using namespace std;
int fa[2005];
int n,m,p,q;
char c;
set<int> a;
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
    for(int i=1;i<=n*2;i++)
    {
        fa[i]=i;
    }
    for(int i=1;i<=m;i++)
    {
        cin>>c>>p>>q;
        if(c=='F')
        {
            ma(p,q);
        }else if(c=='E'){
            ma(p,q+n);
            ma(q,p+n);
        }
    }
    for(int i=1;i<=n;i++)
    {
        a.insert(find(i));
        // cout<<find(i)<<' ';
    }
    // cout<<endl;
    cout<<a.size();
}