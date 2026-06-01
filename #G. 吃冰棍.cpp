#include<bits/stdc++.h>
using namespace std;
int n;
bool ok(int s)
{
    //int o=s;
    int cnt=s,yu=s;
    while(yu>=3)
    {
        //yu=s%3;
        cnt+=(yu/3);
        yu=yu/3+yu%3;
        // s/=3;
        // if(yu/3>0)
        // {
        //     yu=yu%3+yu;
        //     cnt+=(yu/3);
        // }
    }
    //cout<<o<<' '<<cnt<<endl;
    return cnt<n;
}
int main()
{
    cin>>n;
    int l=1,r=n,mid=(l+r)/2;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(ok(mid))
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