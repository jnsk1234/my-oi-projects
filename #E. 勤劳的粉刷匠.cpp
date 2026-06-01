#include<bits/stdc++.h>
using namespace std;
int n,m;
char a[2505][2505];
int w[2505];
int b[2505];
int r[2505];
int ans=1e9;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='W')
            {
                w[i]++;
            }
            if(a[i][j]=='B')
            {
                b[i]++;
            }
            if(a[i][j]=='R')
            {
                r[i]++;
            }
        }
        w[i]+=w[i-1];
        b[i]+=b[i-1];
        r[i]+=r[i-1];
    }
    for(int i=2;i<=n-1;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            int cnt=0;
            cnt+=b[i-1]+r[i-1];
            cnt+=(w[j-1]-w[i-1])+(r[j-1]-r[i-1]);
            cnt+=(w[n]-w[j-1])+(b[n]-b[j-1]);
            //cout<<i<<' '<<j<<' '<<cnt<<endl;
            ans=min(ans,cnt);
        }
    }
    cout<<ans;
    return 0;
}
/*
3 5
WWWWW
BBBBB
RRRRR
*/