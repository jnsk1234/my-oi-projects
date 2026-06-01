#include<bits/stdc++.h>
using namespace std;
int t[500005];
int n,m;
int a,b,c;
int ans1,ans;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        if(c!=0)
        {
            t[a]+=(b);
            ans++;
            ans1=ans;
        }else{
            t[a]+=(b);
        }
    }
    // cout<<ans1;
    sort(t+1,t+m+1,cmp);
    for(int i=1;i<=m;i++)
    {
        cout<<t[i]<<' ';
        ans1=min(ans1,t[i]);
    }

    cout<<ans;
    return 0;
}