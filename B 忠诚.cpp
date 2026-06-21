#include<bits/stdc++.h>
using namespace std;
long long st[100005][20];
long long s[25];
long long a[100005];
long long n,m,l,r;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    memset(st,0x3f3f3f3f,sizeof(st));
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        st[i][0]=a[i];
    }
    s[0]=1;
    for(long long i=1;i<=20;i++)
    {
        s[i]=s[i-1]*2;
    }
    int kkk=log2(n);
    for(long long i=1;i<=kkk;i++)
    {
        for(long long j=1;j+s[i]-1<=n;j++)
        {
            st[j][i]=min(st[j][i-1],st[j+s[i-1]][i-1]);
        }
    }
    for(long long i=1;i<=m;i++)
    {
        cin>>l>>r;
        long long k=log2(r-l+1);
        cout<<min(st[l][k],st[r-s[k]+1][k])<<' ';
    }
    return 0;
}