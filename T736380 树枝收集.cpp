#include<bits/stdc++.h>
using namespace std;
int n,x,y;
int a[1005];
int ans1,ans2;
int main()
{
    cin>>n>>x>>y;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        if((x*y==a[i])||(x==y*a[i])||(y==x*a[i]))
        {
            ans1++;
            ans2=max(ans2,a[i]);
        }if((x+y==a[i])||(x==y+a[i])||(y==x+a[i]))
        {
            ans1++;
            ans2=max(ans2,a[i]);
        }
    }
    cout<<ans1<<' '<<ans2;
    return 0;
}