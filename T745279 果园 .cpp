#include<bits/stdc++.h>
using namespace std;
int ans,mx;
int n,k,x;
int main()
{
    cin>>n>>k;
    for(int i=1;i<=k;i++)
    {
        cin>>x;
        ans=max(ans,x);
    }
    for(int i=k+1;i<=n;i++)
    {
        cin>>x;
        if(x>ans)
        {
            mx=x;
            break;
        }
    }
    if(mx==0)
    {
        cout<<x;
        exit(0);
    }
    cout<<mx;
    return 0;
}