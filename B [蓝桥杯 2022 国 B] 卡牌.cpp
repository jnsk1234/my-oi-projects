#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005],b[200005];
int ans;
bool cheak(int q)
{
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(q-a[i]<=b[i])
        {
            cnt+=q-a[i];
        }
    }
    if(cnt>m)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    int l=1,r=n,mid=(l+r)/2;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(cheak(mid))
        {
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout<<ans;
    return 0;
}