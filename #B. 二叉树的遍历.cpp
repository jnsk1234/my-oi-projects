#include<bits/stdc++.h>
using namespace std;
int n;
int l,r;
struct node{
    int l,r;
};
node a[1000005];
void dfs1(int x){
    cout<<x<<' ';
    if(a[x].l!=0)
    {
        dfs1(a[x].l);
    }
    if(a[x].r!=0)
    {
         dfs1(a[x].r);
    }
}
void dfs2(int x){
    if(a[x].l!=0)
    {
        dfs2(a[x].l);
    }
    cout<<x<<' ';
    if(a[x].r!=0)
    {
        dfs2(a[x].r);
    }
}
void dfs3(int x){
    if(a[x].l!=0)
    {
        dfs3(a[x].l);
    }
    if(a[x].r==0)
    {
        dfs3(a[x].r);
    }
    cout<<x<<' ';
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
    dfs1(1);
    cout<<endl;
    dfs2(1);
    cout<<endl;
    dfs3(1);
    cout<<endl;
    return 0;
}