#include<bits/stdc++.h>
using namespace std;
struct node{
    int x,y,t;
};
node a[100005];
int fa[1005];
int n,m,mx;
bool cmp(node A,node B)
{
    return A.t<B.t;
}
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
    for(int i=1;i<=n;i++)
    {
        fa[i]=i;

    }
    for(int i=1;i<=m;i++)
    {
        cin>>a[i].x>>a[i].y>>a[i].t;
        mx=max(mx,a[i].t);
    }
    sort(a+1,a+m+1,cmp);
    for(int i=1;i<=m;i++)
    {
        ma(a[i].x,a[i].y);
        int cnt=find(1);
        int flag=0;
        for(int j=1;j<=n;j++)
        {
            if(find(j)!=cnt)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<a[i].t;
            return 0;
        }
    }
    int cnt=find(1);
        int flag=0;
        for(int j=1;j<=n;j++)
        {
            if(find(j)!=cnt)
            {
                flag=1;
            }
        }
        if(flag==1)
        {
             cout<<-1;
        }
    return 0;
}