#include<bits/stdc++.h>
using namespace std;
int n,rmb[105],rp[105],timee[105],m,r;
int a[1005][1005];
int b[1005][1005];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>rmb[i]>>rp[i]>>timee[i];
    }
    cin>>m>>r;
    for(int i=1;i<=1000;i++)
    {
        for(int j=1;j<=1000;j++)
        {
            // b[i][j]=1e9;
        }
    }
    for(long long i=1;i<=n;i++)
    {
        for(long long j=m;j>=rmb[i];j--)
        {
            for(long long k=r;k>=rp[i];k--)
            {
                if(a[j][k]<a[j-rmb[i]][k-rp[i]]+1)
                {
                    a[j][k]=a[j-rmb[i]][k-rp[i]]+1;
                    b[j][k]=b[j-rmb[i]][k-rp[i]]+timee[i];
                }
                else if(a[j][k]==a[j-rmb[i]][k-rp[i]]+1){
                    b[j][k]=min(b[j-rmb[i]][k-rp[i]]+timee[i],b[j][k]);
                }
            }
        }
    }
    if(b[m][r]==1e9)
    {
        cout<<0;
        return 0;
    }
    cout<<b[m][r];
    return 0;
}