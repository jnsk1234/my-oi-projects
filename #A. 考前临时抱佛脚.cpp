#include<bits/stdc++.h>
using namespace std;
int s1,s2,s3,s4;
int a[25],b[25],c[25],d[25];
int dp1[1215];
int dp2[1215];
int dp3[1215];
int dp4[1215];
int cnt=1;
int cs1,cs2,cs3,cs4;
int ans;
int main()
{
    cin>>s1>>s2>>s3>>s4;
    for(int i=1;i<=s1;i++)
    {
        cin>>a[i];
        cs1+=a[i];
    }
    for(int i=1;i<=s2;i++)
    {
        cin>>b[i];
        cs2+=b[i];
    }
    for(int i=1;i<=s3;i++)
    {
        cin>>c[i];
        cs3+=c[i];
    }
    for(int i=1;i<=s4;i++)
    {
        cin>>d[i];
        cs4+=d[i];
    }
    sort(a+1,a+s1+1);
    sort(b+1,b+s2+1);
    sort(c+1,c+s3+1);
    sort(d+1,d+s4+1);
    for(int i=1;i<=s1;i++)
    {
        for(int j=cs1/2;j>=a[i];j--)
        {
            dp1[j]=max(dp1[j-a[i]]+a[i],dp1[j]);
        }
    }
    for(int i=1;i<=s2;i++)
    {
        for(int j=cs2/2;j>=b[i];j--)
        {
            dp2[j]=max(dp2[j-b[i]]+b[i],dp2[j]);
        }
    }
    for(int i=1;i<=s3;i++)
    {
        for(int j=cs3/2;j>=c[i];j--)
        {
            dp3[j]=max(dp3[j-c[i]]+c[i],dp3[j]);
        }
    }
    for(int i=1;i<=s4;i++)
    {
        for(int j=cs4/2;j>=d[i];j--)
        {
            dp4[j]=max(dp4[j-d[i]]+d[i],dp4[j]);
        }
    }
    ans+=(cs1-dp1[cs1/2]);
    ans+=(cs2-dp2[cs2/2]);
    ans+=(cs3-dp3[cs3/2]);
    ans+=(cs4-dp4[cs4/2]);
    cout<<ans;
    // cout<<'o'<<dp4[cs4/2+1];
    return 0;
}
//mole