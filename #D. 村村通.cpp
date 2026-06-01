#include<bits/stdc++.h>
using namespace std;
long long fa[1005];
long long n,m,cnt=0,ans=0,x,y;
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
int main()
{
    while(cin>>n)
    {
        cnt=0; 
        if(n==0)
        {
            return 0;
        }
        cin>>m;
        for(int i=1;i<=n;i++)
        {
            fa[i]=i;
        }
        for(int i=1;i<=m;i++){
            cin>>x>>y;
            ma(x,y);
        }
        for(int i=1;i<=n;i++)
        {
            if(fa[i]==i)
            {
                cnt++;
            }
        }
        cout<<cnt-1<<endl;
    }
    return 0;
}