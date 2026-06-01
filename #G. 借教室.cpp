#include<bits/stdc++.h>
using namespace std;
long long n,m,r[1000005],d[1000005],s[1000005],t[1000005],c[1000005]; 
bool ok(long long o)
{
    memset(c,0,sizeof(c));
    for(long long i=1;i<=o;i++)
    {
        c[s[i]]+=d[i];
        c[t[i]+1]-=d[i];
    }
    long long cnt=0;
    for(long long i=1;i<=n;i++){
        cnt+=c[i];
        if(cnt>r[i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
    {
        cin>>r[i];
    }
    for(long long i=1;i<=m;i++)
    {
        cin>>d[i]>>s[i]>>t[i];
        // c[s[i]]+=(-d[i]);
        // c[t[i]+1]-=(-d[i]);
    }
    long long l=1,r=m,mid=(l+r)/2;
    if(ok( m))
    {
        cout<<0;
        return 0;
    }
    while(l<=r)
    {
        mid=(l+r)/2;
        if(ok(mid)){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<-1<<endl;
    cout<<l;
    return 0;
}