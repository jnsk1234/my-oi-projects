#include<bits/stdc++.h>
using namespace std;
long long a[100005],s[100005],t[100005];
long long n,k,ans;
int main()
{
    cin>>n>>k;
    t[0]=1;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        s[i]=s[i-1]+a[i];
        ans+=t[(s[i]%k)];
        t[(s[i]%k)]++;
    }
    cout<<ans;
    return 0;
}