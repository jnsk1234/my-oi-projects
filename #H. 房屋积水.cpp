#include<bits/stdc++.h>
using namespace std;
int a[105],l[105],r[105];
int n,ans;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    l[1]=a[1];
    for(int i=2;i<=n;i++)
    {
        l[i]=max(l[i-1],a[i]);
    }
    r[n]=a[n];
    for(int i=n-1;i>=1;i--)
    {
        r[i]=max(r[i+1],a[i]);
    }
    for(int i=1;i<=n;i++)
    {
        ans+=min(r[i],l[i])-a[i];
        //cout<<r[i]<<' ';
    }
    cout<<ans;
    return 0;
}