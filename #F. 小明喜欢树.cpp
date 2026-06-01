#include<bits/stdc++.h>
using namespace std;
vector<long long> a[100005];
map<int,int> d1;
long long d2[100005];
long long f[100005];
long long n,ans;
long long u,v;
long long cnt=1;
void dfs(long long x,long long d)
{
    ans=max(d,ans);
    f[d]=max(f[d],d2[x]);
    if(a[x].size()==0)
    {
        return ;
    }
    else{
        for(long long i:a[x])
        {
            dfs(i,d+1);
        }
    }
}
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        int x,y;
        cin>>u>>v;
        d2[i]=v;
        a[u].push_back(i);
    }
    dfs(1,1);
    for(long long i=1;i<=ans;i++)
    {
        cout<<f[i]<<' ';
    }
    return 0;
}