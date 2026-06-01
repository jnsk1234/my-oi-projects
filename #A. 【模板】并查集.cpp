#include<bits/stdc++.h>
using namespace std;
int fa[200005];
int n,m,z,x,y;
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
        cin>>z>>x>>y;
        if(z==1)
        {
            ma(x,y);
        }
        else{
            if(find(x)!=find(y))
            {
                cout<<"N"<<endl;
            }else{
                cout<<"Y"<<endl;
            }
        }
    }
    
    return 0;
}