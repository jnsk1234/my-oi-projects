#include<bits/stdc++.h>
using namespace std;
int m,a[100005],b[100005],x,y;
int main()
{
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    }
    cin>>x>>y;
    // for(int i=1;i<=m;i++)
    // {
    //     cout<<b[i]<<' ';
    
    // }    
    // cout<<endl;
    for(int i=1;i<=m;i++)
    {
        int o=0,p=0;
        o=b[i]-b[1-1];
        p=b[m]-b[i];
        //cout<<o<<' '<<p<<endl;
        if(o<=y&&o>=x&&p>=x&&p<=y)
        {
            cout<<i+1;
            return 0;
        }
    }
    cout<<0;
    return 0;
}