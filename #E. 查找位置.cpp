#include<bits/stdc++.h>
using namespace std;
int n;
int a[100005];
vector<int> dp;
int q=0;
int ans;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    dp.push_back(a[1]);
    for(int i=2;i<=n;i++)
    {
        if(a[i]>=dp[dp.size()-1])
        {
            dp.push_back(a[i]);
        }
        else{
            ans=lower_bound(dp.begin(),dp.end(),a[i])-dp.begin();
            dp[ans]=a[i];
        }
    }
    cout<<n-dp.size();
    return 0;
}