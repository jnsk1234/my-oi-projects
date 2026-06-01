#include<bits/stdc++.h>
using namespace std;
int n;
int a[100005];
inline void fff(int L,int R)
{
    if(L>=R) return;
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
    fff(L,r);
    fff(l,R);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    fff(1,n);
    for(int i=1;i<=n-1;i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<a[n];

    
    return 0;
}