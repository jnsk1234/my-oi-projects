#include<bits/stdc++.h>
using namespace std;
vector<long long>a[50005];
long long x,y,n; 
long long dp1[10005];
long long dp2[10005];
set<long long>s;

void dfs(long long x,long long fa)
{
    dp1[x]=1;
    for(long long i:a[x])
    {
        if(i==fa)
        {
            continue;
        }
        dfs(i,x);
        dp1[x]+=dp1[i];
        dp2[x]=max(dp2[x],dp1[i]);
    }
    dp2[x]=max(dp2[x],(n-dp1[x]));
}
int main()
{

    cin>>n;
    for(long long i=1;i<=n-1;i++)
    {
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    dfs(1,-1);
    for(long long i=1;i<=n;i++)
    {
        if(dp2[i]<=n/2)
        {
            s.insert(i);
        }
    }
    if(s.size()==0)
    {
        cout<<"NONE";
        exit(0);
    }
    for(long long i:s)
    {
        cout<<i<<endl;
    }
    return 0;
}