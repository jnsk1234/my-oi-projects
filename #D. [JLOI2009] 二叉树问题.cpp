#include<bits/stdc++.h>
using namespace std;
int n;
int u,v;
int fa[105];
int s[105];
int f[105];
int vis[105],cntx,cnty;
vector<int> a[105];
int ans,x,y,ans1,ans2;
void dfs(int x,int d){
    fa[x]=d;
    s[x]=s[d]+1;
    f[s[x]]++;
    for(int i:a[x])
    {
        if(i!=d)
        {
            dfs(i,x);
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    cin>>x>>y;
    int xx=x,yy=y;
    s[0]=0;
    dfs(1,0);
    for(int i=1;i<=n;i++)
    {
        ans=max(ans,s[i]);
        ans1=max(f[i],ans1);
    }
    for(int i=1;i<=n+5;i++)
    {
        if(xx==yy) 
        {
            break;
        }
        if(s[xx]>s[yy])
        {
            xx=fa[xx];
        }else if(s[xx]<s[yy])
        {
            yy=fa[yy];
        }else{
            xx=fa[xx];
            yy=fa[yy];
        }
    }
    while(x!=xx)
    {
        x=fa[x];
        cntx++;
    }while(y!=yy)
    {
        y=fa[y];
        cnty++;
    }
    cout<<ans<<endl<<ans1<<endl<<cntx*2+cnty;
    return 0;
}