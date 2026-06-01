#include<bits/stdc++.h>
using namespace std;
vector<long long> a[100005];
long long s[100005];
long long dp[100005];
long long n,q;
string s1;
long long op;
long long v;
void dfs(long long x)
{
    for(long long i:a[x])
    {
        dp[i]+=dp[x];
        dfs(i);
    }
}
int main()
{
    cin>>n;
    for(long long i=2;i<=n;i++)
    {
        cin>>v;
        a[v].push_back(i);
    }
    cin>>s1;
    for(long long i=0;i<s1.size();i++)
    {
        op=(s1[i]-'0');
        s[i+1]=op;
    }
    cin>>q;
    for(long long i=1;i<=q;i++)
    {
        cin>>op;
        dp[op]+=1;
    }
    dfs(1);
    for(long long i=1;i<=n;i++)
    {
        if(dp[i]%2==0)
        {
            cout<<s[i];
        }else{
            cout<<(s[i]^1);
        }
    }

    return 0;
}