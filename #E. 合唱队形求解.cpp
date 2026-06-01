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
    z[1]=1;
    for(int i=1;i<=n;i++)
    {
        z[i]=1;
        for(int j=1;j<i;j++)
        {
           if(a[j]<a[i])
           {
                z[i]=max(z[j]+1,z[i]);
           }
        }
    }
    y[n]=1;
    for(int i=n-1;i>=1;i--)
    {
        y[i]=1;
        for(int j=i+1;j<=n;j++)
        {
           if(a[j]<a[i])
           {
                y[i]=max(y[j]+1,y[i]);
           }
        }
    }
    for(int i=1;i<=n;i++)
    {
        ans=max(ans,y[i]+z[i]-1);
    }
    cout<<n-ans;
    return 0;
}