#include<bits/stdc++.h>
using namespace std;
int n;
int a[100005],c[100005],ans,m;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n-1;i++)
    {
        c[i]=a[i+1]-a[i];
        //cout<<c[i]<<' ';
    }
    sort(c+1,c+n+1);
    // for(int i=1;i<=n-1;i++)
    // {
    //      //c[i]=a[i+1]-a[i];
    //     cout<<c[i]<<' ';
    // }
    for(int i=2;i<=m+1;i++)
    {
        ans+=c[i];
    }
    cout<<ans;
    return 0;
}