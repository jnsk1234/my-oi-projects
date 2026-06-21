#include<bits/stdc++.h>
using namespace std;
int st[50005][20];
int st2[50005][20];
int n,q,l,r;
int a[50005];
int s[25];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>q;
    // cout<<n;
    memset(st2,0x3f3f3f3f,sizeof(st2));
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        st[i][0]=a[i];
        st2[i][0]=a[i];
    }
    s[0]=1;
    for(int i=1;i<=20;i++){
        s[i]=s[i-1]*2;
    }
    int kkk=log2(n);
    for(int i=1;i<=kkk;i++)
    {
        for(int j=1;j+s[i]-1<=n;j++)
        {
            st[j][i]=max(st[j][i-1],st[j+s[i-1]][i-1]);
            st2[j][i]=min(st2[j][i-1],st2[j+s[i-1]][i-1]);
        }
    }
    for(int i=1;i<=q;i++)
    {
        cin>>l>>r;
        int k=log2(r-l+1);
        cout<<max(st[l][k],st[r-s[k]+1][k])-min(st2[l][k],st2[r-s[k]+1][k])<<"\n";
    }
    return 0;
}