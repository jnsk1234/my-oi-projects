#include<bits/stdc++.h>
using namespace std;
long long a[100005],t[100005],q,n,p;
long long find(int s)
{
    long long l=1,r=n,mid=(l+r)/2;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]<s)
        {
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    return l;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        long long h;
        cin>>a[i];
        t[i]=a[i];
    }
    sort(a+1,a+n+1);
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        cin>>p;
        long long ans=find(q);
        cout<<ans<<endl;
    }
    return 0;
}   