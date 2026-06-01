#include<bits/stdc++.h>
using namespace std;
int n,k,l[100005],mx=0;
bool cheak(int s)
{
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        cnt+=l[i]/s;
    }
    return cnt>=k;
}
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>l[i];
        mx=max(l[i],mx);
    }
    int l=1,r=mx,mid=(l+r)/2;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(cheak(mid))
        {
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<l-1;
    return 0;
}