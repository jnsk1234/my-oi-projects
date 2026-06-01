#include<bits/stdc++.h>
using namespace std;
int ll,n,k;
int a[1000005];
bool ok(int s)
{
    int cnt=0;
    int yi=a[1];
    for(int i=2;i<=n;i++)
    {
        if(a[i]-yi>s)
        {
            if((a[i]-yi)%s==0)
            {
                cnt+=((a[i]-yi)/s-1);
            }
            else
            {
                cnt+=(a[i]-yi)/s;
            }
        }
        yi=a[i];
    }
    return cnt>k;
}
int main()
{
    cin>>ll>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int l=1,r=ll,mid=(l+r)/2;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(ok(mid))
        {
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout<<l;
    return 0;
}