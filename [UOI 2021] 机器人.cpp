#include<bits/stdc++.h>
using namespace std;
int st[62][1000005];
long long n,m,l,r,t;
long long cnt[1000005];
char ch;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>ch;
        if(ch=='L')
        {
            st[0][i]=i-1;
        }else{
            st[0][i]=1+i;
        }
    }
    cin>>t;
    long long kkk=log2(t);
    for(long long i=1;i<=kkk;i++)
    {
        for(long long j=1;j<=n;j++)
        {
            st[i][j]=st[i-1][st[i-1][j]];
        }
    }
    for(long long i=1;i<=n;i++)
    {
        long long x=i;
        for(long long j=0;j<=62;j++)
        {
            if(t&(1ll<<j))
            { 
                x=st[j][x];
            }
        }
        cnt[x]++;
    }
    for(long long i=1;i<=n;i++)
    {
        cout<<cnt[i]<<' ';
    }
    return 0;
}