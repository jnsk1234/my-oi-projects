#include<bits/stdc++.h>
using namespace std;
int n;
int l,r;
struct node{
    int l,r;
};
node a[100005];
void dfs1(int x){
    cout<<x<<endl;
    if(a[x].l!=0)
    {
        dfs1(a[x].l);
    }
    if(a[x].r!=0)
    {
         dfs1(a[x].r);
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
    dfs1(1);
    cout<<endl;
    return 0;
}