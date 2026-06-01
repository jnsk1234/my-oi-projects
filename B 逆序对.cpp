#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[500005];
long long  ans;
void s(long long l,long long r)
{
    long long mid=(l+r)/2;
    if(l==r)
    {
        return;
    }
    s(l,mid);
    s(mid+1,r);
    vector<long long> t;
    long long i=l,j=mid+1;
    while(i<=mid&&j<=r)
    {
        if(a[i]<=a[j])
        {
            t.push_back(a[i]);
            i++;
        }
        if(a[i]>a[j])
        {
            t.push_back(a[j]);
            j++;
            ans+=(mid-i+1);
        }
    }
    while(i<=mid)
    {
        t.push_back(a[i]);
        i++;
    }
    while(j<=r)
    {
        t.push_back(a[j]);
        j++;
    }
    for(long long k=l;k<=r;k++)
    {
        a[k]=t[k-l];
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    s(1,n);
    // for(long long i=1;i<=n-1;i++)
    // {
    //     cout<<a[i]<<' ';
    // }
    // cout<<a[n];
    cout<<ans;
    return 0;
}