#include<bits/stdc++.h>
using namespace std;
int n;
int l,r;
struct node{
    int l,r;
};
node a[1000005];int ans;
void dfs(int x,int d){
    ans=max(d,ans);
    if(a[x].l!=0)
    {
        dfs(a[x].l,d+1);
    }
    if(a[x].r!=0)
    {
        dfs(a[x].r,d+1);
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>l>>r;
        a[i].l=l;
        a[i].r=r;
    }
    dfs(1,1);
    cout<<ans;
    return 0;
}