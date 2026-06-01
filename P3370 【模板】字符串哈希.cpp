#include<bits/stdc++.h>
using namespace std;
string s;
long long n;
long long ans;
long long a[10005];
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>s;
        long long hs=0;
        for(long long i=0;i<s.size();i++)
        {
            hs+=(s[i]*10+hs)%1000000009;
            hs%=1000000009;
        }
        a[i]=hs;
    } 
    sort(a+1,a+n+1);
    for(long long i=1;i<=n;i++)
    {
        if(a[i]!=a[i-1])
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}