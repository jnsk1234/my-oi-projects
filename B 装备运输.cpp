#include<bits/stdc++.h>
using namespace std;
long long v,g,n,ti,vi,gi;
long long a[505][505];
int main()
{
    cin>>v>>g>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>ti>>vi>>gi;
        for(long long j=v;j>=vi;j--)
        {
            for(long long k=g;k>=gi;k--)
            {
                a[j][k]=max(a[j][k],a[j-vi][k-gi]+ti);
            }
        }
    }
    cout<<a[v][g];
    return 0;
}