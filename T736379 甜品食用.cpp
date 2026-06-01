#include<bits/stdc++.h>
using namespace std;
int a,b,x,y,m;
int ans;
int main()
{
    cin>>a>>b>>x>>y>>m;
    if(x<=y)
    {
        if(a*x<=m)
        {
            ans+=a;
            m-=a*x;
            ans+=min(b,(m/y));
        }else{
            ans+=(m/x);
        }
    }
    if(x>y)
    {
        if(b*y<=m)
        {
            ans+=b;
            m-=b*y;
            ans+=min(a,(m/x));
        }else{
            ans+=(m/y);
        }
    }
    cout<<ans;
    return 0;
}