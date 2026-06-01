#include<bits/stdc++.h>
using namespace std;
int n,a[100000+5],b[100000+5],g[100000+5],k[100000+5];
int x,y;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i]>>g[i]>>k[i];
    }
    cin>>x>>y;
    for(int i=n;i>=1;i--)
    {
        int x1=a[i],y1=b[i],x2=a[i]+g[i],y2=b[i]+k[i];
        if(x1<=x&&x<=x2&&y1<=y&&y<=y2)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<"-1";
    return 0;
}