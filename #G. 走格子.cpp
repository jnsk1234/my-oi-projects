#include<bits/stdc++.h>
using namespace std;
long long a[50000],n,ans=0;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    long long cnt=0;
    for(int i=1;i<=n;i++)
    {
       cnt+=a[i];
       ans=min(cnt,ans);
    }
    cout<<abs(ans);
    return 0;
}