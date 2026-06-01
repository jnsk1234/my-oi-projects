#include<bits/stdc++.h>
using namespace std;
long long n,a[100005],c[100005];
long long ans=0;
int main()
{
    cin>>n;
    if(n==0)
    {
        cout<<0;
        return 0;
    }
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        c[i]=a[i]-a[i-1];
    }
    for(long long i=1;i<=n+1;i++)
    {
        //cin>>a[i];
        if(c[i]>=0)
        {
            ans+=c[i];
        }
    }
    cout<<ans;
    return 0;
}