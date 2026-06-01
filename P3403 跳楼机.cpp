#include<bits/stdc++.h>
using namespace std;
long long f[100005];
long long d[100005];
vector<pair<long long,long long>> a[100005];
priority_queue<pair<long long,long long>> q;
long long H,x,y,z,w,s,ans;
long long inf=1e18;

int main()
{
    cin>>H>>x>>y>>z;
    H--;
    for(long long i=0;i<x;i++)
    {
        a[i].push_back({(i+y)%x,y});
        a[i].push_back({(i+z)%x,z});
    }
    for(long long i=1;i<x;i++)
    {
        d[i]=inf;
    }
    q.push({0,0});
    while(!q.empty())
    {
        auto t=q.top();
        q.pop();
        if(f[t.second]==1)
        {
            continue;
        }
        f[t.second]=1;
        for(auto i:a[t.second])
        {
            if(d[t.second]+i.second < d[i.first]) {
                d[i.first]=d[t.second]+i.second;
                q.push({-d[i.first],i.first});
            }
            // d[i.first]=min(d[i.first],d[t.second]+i.second);
            // q.push({-d[i.first],i.first});
        }
    }
    for(long long i=0;i<x;i++)
    {
		if(H>=d[i]) 
            ans+=(H-d[i])/x+1;
    }
    // ans--;
    cout<<ans;
    return 0;
}