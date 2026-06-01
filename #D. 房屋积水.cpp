#include<bits/stdc++.h>
using namespace std;
int a[105];
int z[105],y[105];
int ans;
int n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            z[i]=max(z[i],a[j]);
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            y[i]=max(y[i],a[j]);
        }
    }
    for(int i=1;i<=n;i++)
    {
        ans+=(min(y[i],z[i])-a[i]);
        // c//out<<ans<<endl;
    }
    cout<<ans;
    return 0;
}