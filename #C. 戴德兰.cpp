#include<bits/stdc++.h>
using namespace std;
int a[10005],n,c,d,ans,t;
int main()
{
    cin>>n>>c>>d;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    c=c+d;
    for(int i=1;;i++)
    {
        t+=a[i];
        ans++;
        if(t>=c)
        {
            cout<<ans-1;
            return 0;
        }
    }
    
    return 0;
}