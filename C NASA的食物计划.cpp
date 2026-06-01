#include<bits/stdc++.h>
using namespace std;
long long h,t,n,ti,hi,gi;
long long a[405][405];
int main()
{
    cin>>h>>t>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>hi>>ti>>gi;
        for(long long j=h;j>=hi;j--)
        {
            for(long long k=t;k>=ti;k--)
            {
                a[j][k]=max(a[j][k],a[j-hi][k-ti]+gi);
            }
        }
    }
    cout<<a[h][t];
    return 0;
}