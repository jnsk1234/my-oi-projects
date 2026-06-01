#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[2005],b[2005];
map<int,int> t;
int ma;
int ans;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }    
    for(int i=1;i<=m;i++)
    {
        cin>>b[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            int c=b[j]-a[i];
            if(c>0)
                t[c]++;
        }
    }
    for(auto i:t)
    {
        if(i.second>ma)
        {
            ma=i.second;
            ans=i.first;
        }
    }
    cout<<ans;
    return 0;
}