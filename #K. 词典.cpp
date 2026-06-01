#include<bits/stdc++.h>
using namespace std;
string s[3005];
int n,m,ans;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
        sort(s[i].begin(),s[i].end(),greater<char>());
    }
    for(int i=1;i<=n;i++)
    {
        reverse(s[i].begin(),s[i].end());
        ans=1;
        for(int j=1;j<=n;j++)
        {
            if(i!=j&&s[i]>=s[j])
            {
                ans=0;
                break;
            }
        }
        cout<<ans;
        reverse(s[i].begin(),s[i].end());
    }
    return 0;
}