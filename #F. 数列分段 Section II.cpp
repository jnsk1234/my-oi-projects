#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005],mx=0,sum=0;
bool cheak(int s)
{
    int sum=0,cnt=1;
    for(int i=1;i<=n;i++)
    {
        if(sum+a[i]<=s)
        {
            sum+=a[i];
        }else{
            cnt++,sum=a[i];
        }
    }
    //cout<<cnt<<' '<<s<<endl;
    return cnt>m;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        mx=max(a[i],mx);
    }
    int l=mx,r=sum,mid=(l+r)/2;
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
    cout<<l;
    return 0;
}