#include<bits/stdc++.h>
using namespace std;
int n,a[100005],q,c;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    //sort(a+1,a+n+1);
    cin>>q;
    while(q--)
    {
        cin>>c;
        int l=1,r=n,mid=(l+r)/2;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(a[mid]>=c)
            {
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        if(a[l]==c)
        {
            cout<<l<<' ';
        }
        else{
            cout<<-1<<' ';
        }
        
    }
    return 0;
}