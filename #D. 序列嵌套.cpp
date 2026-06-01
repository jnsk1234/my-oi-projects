#include<bits/stdc++.h>
using namespace std;
map<long long,long long> t;
long long a[100005],b[100005],c[100005],n,ans;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        t[a[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>c[i];
    }
    for(int i=1;i<=n;i++)
    {
        ans+=t[b[c[i]]];
    }
    cout<<ans;
    return 0;
}