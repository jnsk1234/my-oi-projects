#include<bits/stdc++.h>
using namespace std;
int n,q,a[100005],t[100005];
int k=0;
int e;
int main()
{
    cin>>n>>q;
    int x;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        a[i]=a[i-1]+x;
    }
    for(int i=1;i<=q;i++)
    {
        cin>>x;
        int l=1,r=n,mid=(l+r)/2;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(a[mid]>=x+1)
            {
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        cout<<l<<endl;
    }
    return 0;
}