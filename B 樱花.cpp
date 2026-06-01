#include<bits/stdc++.h>
using namespace std;
int v[100005],w[100005],s[100005];
int v1[100005],w1[100005],s1[100005];
int cnt1=1,cnt2=1,n,V;
int vi,wi,si;
int dp[100005];
int a,b,c,d;
char q;
int main()
{
    scanf("%d:%d %d:%d %d\n", &a, &b, &c, &d, &n);
    V=((c*60)+d)-((a*60)+b);
    for(int i=1;i<=n;i++)
    {
        cin>>vi>>wi>>si;
        if(si!=0)
        {
            int x=1;
            while(x<=si)
            {
                v[cnt1]=x*vi;
                w[cnt1]=x*wi;
                si-=x;
                x*=2;
                cnt1++;
            }
            if(si!=0)
            {
                v[cnt1]=si*vi;
                w[cnt1]=si*wi;
                cnt1++;
            }
        }else{
            v1[cnt2]=vi;
            w1[cnt2]=wi;
            cnt2++;
        }
    }
    for(int i=1;i<=cnt1;i++)
    {
        for(int j=V;j>=v[i];j--)
        {
            dp[j]=max(dp[j],dp[j-v[i]]+w[i]);
        }
    }
    for(int i=1;i<=cnt2;i++)
    {
        for(int j=v1[i];j<=V;j++)
        {
            dp[j]=max(dp[j],dp[j-v1[i]]+w1[i]);
        }
    }
    cout<<dp[V];
    return 0;
}