#include<bits/stdc++.h>
using namespace std;
int a[5000005],n,k;
inline int fff(int l,int r,int k)
{
    int i=l,j=r;
    int mid=a[(l+r)/2];
    while(i<=j)
    {
        while(a[i]<mid) i++;
        while(a[j]>mid) j--;
        if(i<=j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    if(k<=j)
    {
        return fff(l,j,k);
    }else if(k>=i)
    {
        return fff(i,r,k);
    }else{
        return a[j+1];
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