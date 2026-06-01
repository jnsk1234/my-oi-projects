#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[500005],cnt,ans;
long long c[500005];
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cnt=min(n,1+a[1]-1);
    long long i=1;
    while(i<=cnt&&i<=n)
    {
        c[i]=1;
        long long oo=i+a[i]-1;
        if(oo>cnt)
        {
            cnt=min(n,oo);
        }
        // cnt=max(cnt,i+a[i]-1);
        i++;
    }
    for(long long i=1;i<=n;i++)
    {
        ans+=c[i]; 
    }
    cout<<ans;
    return 0;
}