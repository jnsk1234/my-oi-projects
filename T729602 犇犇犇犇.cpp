#include<bits/stdc++.h>
using namespace std;
string s;
int a[505];
int n,cnt=1,x;
int ans=1;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        // cout<<a[i]<<' ';
        if(x+a[i]<=140)
        {
            x+=a[i];
        }else{
            ans++;
        }
    }
    cout<<ans;
    return 0;
}