#include<bits/stdc++.h>
using namespace std;
int n;
int dp[40005];
int ans;
struct AAA{
    int h,a,c;
}p[404];
bool cmp(AAA a,AAA b)
{
    return a.a<b.a;
}
int main()
{
    dp[0]=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i].h>>p[i].a>>p[i].c;
    }
    sort(p+1,p+n+1,cmp);
    for(int i=1;i<=n;i++)
    {
        for(int j=p[i].a;j>=p[i].h;j--)
        {
            for(int k=0;k<=p[i].c;k++)
            {
                if(j-p[i].h*k>=0)
                    dp[j]|=dp[j-p[i].h*k];
            }
        }
    }
    for(int i=1;i<=40000;i++)
    {
        if(dp[i])
            ans=max(ans,i);
    }
    cout<<ans;
    
    return 0;
}