#include<bits/stdc++.h>
using namespace std;
long long n,x,y,u,v;
long long fa[105];
long long b[105];
inline void LCA(long long x,long long y)
{
    while(x)
    {
        b[x]=1;
        x=fa[x];
    }
    while(y)
    {
        if(b[y]==1)
        {
            cout<<y;
            return ;
        }
        y=fa[y];
    }
}
int main()
{
    cin>>n;
    cin>>x>>y;
    for(long long i=1;i<=n-1;i++)
    {
        cin>>u>>v;
        fa[u]=v;
    }
    LCA(x,y);
    
    return 0;
}