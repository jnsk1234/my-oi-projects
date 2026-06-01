#include<bits/stdc++.h>
using namespace std;
int a[1000005],b[1000005],n,k,ans=0;
int main()
{
    cin>>n;
    cin>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    } 
    for(int i=1;i<=n-k;i++)
    {
        ans=max(ans,b[i+k]-b[i-1]);
        //cout<<b[i+k]-b[i-1]<<" ";
        //cout<<i<<" ";
    } 
    cout<<ans;
}