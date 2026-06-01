#include<bits/stdc++.h>
using namespace std;
long long l,r;
long long ans;
long long t;
int main()
{
    cin>>t;
    while(t--)
    {
        scanf("%lld %lld",&l ,&r);
        ans = (long long)sqrt(r) - (long long)sqrt(l - 1);
        printf("%lld\n",ans);
    }
    return 0;
}