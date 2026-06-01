#include<bits/stdc++.h>
using namespace std;
long long a[100005];
long long n;
long long p,q;
long long ans;
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    if(a[1]%2==0)
        {
            p=1;
        }else{
            p=0;
        }
        q=p;
    for(long long i=2;i<=n;i++)
    {
        if(a[i]%2==0)
        {
            p=1;
        }else{
            p=0;
        }
        if(p!=q)
        {
            ans++;
        }
        q=p;
    }
    cout<<ans;
    return 0;
}