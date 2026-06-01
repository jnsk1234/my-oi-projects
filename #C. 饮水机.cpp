#include<bits/stdc++.h>
using namespace std;
int n,s,w,c[100000+50000+5];
int l,r,oo,mx=-1,ans,y;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s>>w;
        if(s-w>=0)
        {
            l=s-w;
        }else{
            l=0;
        }
        r=s+w;
        c[l]++;
        c[r+1]--;
        mx=max(mx,r);
    }
    for(int i=1;i<=mx;i++)
    {
        c[i]=c[i-1]+c[i];
    }
    for(int i=1;i<=mx;i++)
    {
        while(c[i]==c[i-1])
        {
            i++;
        }
        if(c[i]>=2)
        {
            ans++;
            y+=c[i];
        }
    }
    if(y==n)
    {
        cout<<ans;
    }else{
        cout<<ans+y-n;
    }
    return 0;
}