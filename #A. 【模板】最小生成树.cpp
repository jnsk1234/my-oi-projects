#include<bits/stdc++.h>
using namespace std;
long long fa[5005];
long long n,m,cnt=0,ans=0;
struct node1{
    long long x,y,z;
}e[200005];
long long find(long long x)
{
    if(fa[x]==x) return x;
    return fa[x]=find(fa[x]);
}
void ma(long long x,long long y)
{
    long long xx=find(x);
    long long yy=find(y);
    if(xx!=yy)
    {
        fa[yy]=xx;
    }
}
bool cmp(node1 A,node1 B)
{
    return A.z<B.z;
}
int main()
{
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
    {
        fa[i]=i;
    }
    for(long long i=1;i<=m;i++)
    {
        cin>>e[i].x>>e[i].y>>e[i].z;
    }
    sort(e+1,e+m+1,cmp);
    for(long long i=1;i<=m;i++)
    {
        long long ox=find(e[i].x);
        long long oy=find(e[i].y);
        if(ox!=oy)
        {
            ma(e[i].x,e[i].y);
            cnt++;
            ans+=e[i].z;
        }
        if(cnt==n-1)
        {
            break;
        }
    }
    if(cnt<n-1)
    {
        cout<<"orz";
    }else{
        cout<<ans;
    }
    return 0;
}