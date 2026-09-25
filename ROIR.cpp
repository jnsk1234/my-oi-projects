#include<bits/stdc++.h>
using namespace std;
long long a[500005];
long long n;
long long sum;
long long ans;
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(long long i=1;i<=n;i++)
    {
        sum+=a[i];
        ans+=(a[i]*i-sum);
    }
    cout<<ans;
    return 0;
}