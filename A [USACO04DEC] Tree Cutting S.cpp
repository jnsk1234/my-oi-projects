#include<bits/stdc++.h>
using namespace std;
long long dp1[10005];
long long dp2[10005];
vector<long long> a[10005];
long long n,x,y;
set<long long> s;
void dfs(long long x,long long y)
{
    dp1[x]=1;
    for(long long i:a[x])
    {
        if(i==y){
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
        return 0;
    }else{
        for(long long i:s)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}