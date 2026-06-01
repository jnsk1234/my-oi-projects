#include<bits/stdc++.h>
using namespace std;
int fa[5005];
int n,m,p;
int x,y;
int find(int x)
{
    if(fa[x]==x) return fa[x];
    return fa[x]=find(fa[x]);
}
void ma(int x,int y)
{
    int xx=find(x);
    int yy=find(y);
    if(xx!=yy){
        fa[yy]=fa[xx];
    }
}
int main()
{
    cin>>n>>m>>p;
    for(int i=1;i<=n;i++)
    {
        fa[i]=i;
    }
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        ma(x,y);
    }
    for(int i=1;i<=p;i++)
    {
        cin>>x>>y;
        if(find(x)!=find(y))
        {
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
    }
    
    return 0;
}