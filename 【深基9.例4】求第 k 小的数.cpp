#include<bits/stdc++.h>
using namespace std;
int n;
int a[5000005];
int k;
inline int fff(int L,int R,int k)
{
    if(L>=R) return a[L];
    int l=L,r=R,mid=a[(l+r)/2];
    while(l<=r)
    {
        while(a[l]<mid) l++;
        while(a[r]>mid) r--;
        if(l<=r)
        {
            swap(a[l],a[r]);
            l++;
            r--;
        }
    }
    if(k>=L&&k<=r)
    {
        return fff(L,r,k);
    }
    else if(k>=l&&k<=R)
    {
        return fff(l,R,k);
    }else{
        return a[r+1];
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    k++;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<fff(1,n,k);

    
    return 0;
}