#include<bits/stdc++.h>
using namespace std;
int a[1000005],b[1000005];
int n,m;
int x,y,z;
int mx=0,t=0;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y>>z;
        a[x]+=z;
        b[y]+=z;
        if(x>y)
        {
            a[1]+=z;
        }
    }
    for(int i=1;i<=n;i++)
    {
        t+=a[i];
        t-=b[i];
        mx=max(t,mx);
    }
    if(mx%36!=0)
    {
        cout<<mx/36+1<<endl;
    }
    else{
        cout<<mx/36<<endl;

    }
}