#include<bits/stdc++.h>
using namespace std;
int fa[505];
int a,b,k,ans,cnt,c;
struct node1{
    long long x,y,z;
}e[1000005];
bool cmp(node1 A,node1 B)
{
    return A.z<B.z;
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
    cin>>a>>b;
    for(int i=1;i<=b;i++)
    {
        fa[i]=i;
    }
    for(int i=1;i<=b;i++)
    {
        for(int j=1;j<=b;j++)
        {   
            cin>>c;
            if(i<j&&c!=0)
            {
                k++;
                e[k].x=i;
                e[k].y=j;
                e[k].z=c;
            }
        }
    }
    for(int i=1;i<=b;i++)
    {
        k++;
        e[k]={0,i,a};
    }
    sort(e+1,e+k+1,cmp);
    for(int i=1;i<=k;i++)
    {
        int xx=find(e[i].x);
        int yy=find(e[i].y);
        if(xx!=yy)
        {
            ma(xx,yy);
            cnt++;
            ans+=e[i].z;
            if(cnt>b)
            {
                break;
            }
        }
    }
    cout<<ans;
    return 0;
}