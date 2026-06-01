#include<bits/stdc++.h>
using namespace std;
int fa[100005];
int n,m,care,flag,a,b;
int find(int x){
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
    }else{
        flag=1;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>care;
    while(care--)
    {
        memset(fa,0,sizeof(fa));
        flag=0;
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            fa[i]=i;
        }
        for(int i=1;i<=m;i++)
        {
            cin>>a>>b;
            ma(a,b);
        }
        if(flag==0)
        {
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}