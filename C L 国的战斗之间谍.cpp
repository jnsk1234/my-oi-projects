#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
int n,m,x,ai,bi,ci;
int main()
{
    cin>>n>>m>>x;
    for(int i=1;i<=n;i++)
    {
        cin>>ai>>bi>>ci;
        for(int j=m;j>=bi;j--)
        {
            for(int k=x;k>=ci;k--)
            {
                a[j][k]=max(a[j][k],a[j-bi][k-ci]+ai);
            }
        }
    }
    cout<<a[m][x];
    
    return 0;
}