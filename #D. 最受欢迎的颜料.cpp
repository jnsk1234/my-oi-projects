#include<bits/stdc++.h>
using namespace std;
int n,x,y;
int a[1000005];
int mx;
int ans=0;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y;
        a[x]++;
        a[y+1]--;
        mx=max(mx,y);
    }
    int cnt=0;
    for(int i=0;i<=mx;i++)
    {
        cnt+=a[i];
        //cout<<cnt<<' ';
        ans=max(ans,cnt);
    }
    cout<<ans;
    return 0;
}