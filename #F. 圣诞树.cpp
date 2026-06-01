#include<bits/stdc++.h>
using namespace std;
int a[100000+5];
int n,k;
int hmax=0,hmin=1e9;
int ans=1e9;
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n-k+1;i++)
    {
        //cout<<hmin<<' '<<hmax<<endl;
        ans=min(ans,a[i+k-1]-a[i]);
    }
    cout<<ans;
    return 0;
}