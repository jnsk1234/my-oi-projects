#include<bits/stdc++.h>
using namespace std;
int ans[10];
int p[10];
int a[10];
int dis[10];
int mx=1e9;
int n;
void dfs(int x)
{
    if(x>n)
    {
        int cnt=0;
        for(int i=1;i<n;i++)
        {
            cnt+=max(a[p[i+1]],a[p[i]]);
        }
        if(cnt<mx)
        {
            for(int i=1;i<=n;i++)
            {
                ans[i]=p[i];
            }
            mx=cnt;
        }
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(dis[i]==0)
        {
            p[x]=i;
            dis[i]=1;
            dfs(x+1);
            dis[i]=0;
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    dfs(1);
    for(int i=1;i<=n;i++)
    {
        cout<<ans[i]-1<<' ';
    }
    return 0;
}