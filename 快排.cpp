#include<bits/stdc++.h>
using namespace std;
int n;
int a[100005];
void s(int l,int r)
{
    int mid=(l+r)/2;
    if(l==r)
    {
        return;
    }
    s(l,mid);
    s(mid+1,r);
    vector<int> t;
    int i=l,j=mid+1;
    while(i<=mid&&j<=r)
    {
        if(a[i]<=a[j])
        {
            t.push_back(a[i]);
            i++;
        }
        if(a[i]>a[j])
        {
            t.push_back(a[j]);
            j++; 
        }
    }
    while(i<=mid)
    {
        t.push_back(a[i]);
        i++;
    }
    while(j<=r)
    {
        t.push_back(a[j]);
        j++;
    }
    for(int k=l;k<=r;k++)
    {
        a[k]=t[k-l];
    }
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
    s(1,n);
    for(int i=1;i<=n-1;i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<a[n];
    return 0;
}