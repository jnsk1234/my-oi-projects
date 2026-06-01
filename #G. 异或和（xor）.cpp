#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[500005];
long long q[500005];
long long id[50000005];
long long k,x,l;
long long ans;
int main()
{
    cin>>n>>k;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        q[i]=q[i-1]^a[i];
    }
    memset(id,-1,sizeof(id));
    id[0]=0;
    for(long long r=1;r<=n;r++)
    {
        x=q[r]^k;
        if(id[x]>=l)
        {
            ans++;
            l=r;
        }
        id[q[r]]=r;
    }
    cout<<ans;
    return 0;
}