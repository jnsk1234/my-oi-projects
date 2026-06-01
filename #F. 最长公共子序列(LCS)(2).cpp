#include<bits/stdc++.h>
using namespace std;
int t1[100005];
int n;
int p1[100005];
int p2[100005];
vector<int> dp;
int ans;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>p1[i];
        t1[p1[i]]=i;
    }
     for(int i=1;i<=n;i++)
    {
        cin>>p2[i];
    }
    dp.push_back(t1[p2[1]]);
    for(int i=2;i<=n;i++)
    {
        if(dp.back()<=t1[p2[i]])
        {
            dp.push_back(t1[p2[i]]);
        }
        else{
            ans=lower_bound(dp.begin(),dp.end(),t1[p2[i]])-dp.begin();
            dp[ans]=t1[p2[i]];
        }
    }
    cout<<dp.size();
    return 0;
}