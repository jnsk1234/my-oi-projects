#include<bits/stdc++.h>
using namespace std;
int n,x,y;
int a[1000005];
int mx;
int ans=0;
int m;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
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
        if(cnt%2==1)
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}