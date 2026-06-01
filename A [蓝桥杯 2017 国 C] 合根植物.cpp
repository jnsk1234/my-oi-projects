#include<bits/stdc++.h>
using namespace std;
int fa[1000005];
int n,m,k;
int a,b;
set <int> s;
int f(int a)
{
    if(fa[a]==a) return a;
    return fa[a]=f(fa[a]);
}
void h(int a,int b)
{
    int af=f(a);
    int bf=f(b);
    fa[af]=bf;
}
int main()
{
    cin>>m>>n;
    cin>>k;
    for(int i=1;i<=n*m;i++)
    {
        fa[i]=i;
    }
    // for(int i=1;i<=n*m;i++)
    // {
    //     cout<<fa[i]<<' ';
    // }
    for(int i=1;i<=k;i++)
    {
        cin>>a>>b;
        h(a,b);
    }
    for(int i=1;i<=n*m;i++)
    {
        s.insert(f(i));
    }
    // for(int i=1;i<=n*m;i++)
    // {
    //     cout<<fa[i]<<' ';
    // }
    cout<<s.size();
    return 0;
}