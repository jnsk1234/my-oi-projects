#include<bits/stdc++.h>
using namespace std;
long long ans,ans2,len;
string s;
long long base=13331;
long long mod=998244353;
long long h1[5000005];
long long h2[5000005];
long long p[5000005];
int main()
{
    cin>>s;
    len=s.size();
    s=' '+s;
    p[0]=1;
    for(long long i=1;i<=len;i++)
    {
        p[i]=p[i-1]*base;
        p[i]%=mod;
        h1[i]=h1[i-1]*base+(s[i]-'a'+1);
        h1[i]%=mod;
    }
    for(long long i=len;i>=1;i--)
    {
        h2[i]=h2[i+1]*base+(s[i]-'a'+1);
        h2[i]%=mod;
    }
    for(long long i=1,j=len;i<j;i++,j--)
    {
        if(s[i]!=s[j])
        {
            break;
        }
        ans++;
    }
    // cout<<ans;
    long long L=ans+1;
    long long R=len-ans;
      if (L > R) {
        cout << ans << '\n';
        return 0;
    }
    for(long long i=L;i<=R;i++)
    {
        long long l=0,r=(R-i+1)/2;
        long long mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            // l=ans+i len-ans
            long long hh1=(((h1[i+mid-1]-(h1[i-1]*p[mid]))%mod)+mod)%mod;
            long long hh2=(((h2[R-mid+1]-(h2[R+1]*p[mid]))%mod)+mod)%mod;
            if(hh1==hh2)
            {
                l=mid+1;
                ans2=max(ans2,mid);
            }else{
                r=mid-1;
            }
        }
    }
    for(long long i=L;i<=R;i++)
    {
        // L~i
        long long l=0,r=(i-L+1) / 2;
        long long mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            long long hh1=(((h1[L+mid-1]-(h1[L-1]*p[mid]))%mod)+mod)%mod;
            long long hh2=(((h2[i-mid+1]-(h2[i+1]*p[mid]))%mod)+mod)%mod;
            if(hh1==hh2)
            {
                l=mid+1;
                ans2=max(ans2,mid);
            }else{
                r=mid-1;
            }
        }
    }
    cout<<ans2+ans;
    return 0;
}
// cdebaijab