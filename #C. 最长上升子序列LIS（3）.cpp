#include<bits/stdc++.h>
using namespace std;
int n;
int a[100005];
int res[100005];
int ans1[100005];
vector<int> dp;
int q=0;
int ans;
int cnt;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    dp.push_back(a[1]);
    for(int i=1;i<=n;i++)
    {
        if(a[i]>dp[dp.size()-1])
        {
            dp.push_back(a[i]);
            res[i]=dp.size();
            cnt++;
        }
        else{
            ans=lower_bound(dp.begin(),dp.end(),a[i])-dp.begin();
            // cout<<ans<<' ';
            dp[ans]=a[i];
            res[i]=ans+1;
        }
     }
     cout<<dp.size();
    // cout<<endl;
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<res[i]<<' ';
    // }
     cout<<endl;
    int len=dp.size();
    for(int i=n;i>=1;i--)
    {
        if(res[i]==len)
        {
            ans1[len]=a[i];
            len--;
        }
    }
    for(int i=1;i<=dp.size();i++)
    {
        cout<<ans1[i]<<" ";
    }
    return 0;
}