#include<bits/stdc++.h>
using namespace std;
int n,x,y;
map<int,int>aa;
map<int,int>bb;
int a[100005],ans;
bool cmp(pair<int,int> a,pair<int,int> b)
{
    return a.second>b.second;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        x=a[i];
        if(i%2==0)
        {
            aa[x]++;
        }else{
            bb[x]++;
        }
    }
    vector<pair<int,int>>a1(aa.begin(),aa.end());
    vector<pair<int,int>>a2(bb.begin(),bb.end());
    sort(a1.begin(),a1.end(),cmp);
    sort(a2.begin(),a2.end(),cmp);
    if(a1[0].first!=a2[0].first)
    {
        ans=n-a1[0].second-a2[0].second;
    }else{
        int y=max(a1[0].second+a2[1].second,a2[0].second+a1[1].second);
        ans=n-y;
    }
    cout<<ans;
    // for(auto i:aa)
    // {
    //     ma=max(ma,i.second);
    // }
    // for(auto i:bb)
    // {
    //     mb=max(mb,i.second);
    // }
    // //if()
    // if(mb==ma&&a[1]==a[2])
    // {
    //     cout<<mb;
    // }else{
    //     cout<<n-mb-ma;
    // }
    
    return 0;
}