#include<bits/stdc++.h>
using namespace std;
int st[100005][20];
int s[25];
int a[100005];
int n,m,l,r;
int main()
{
    cin>>n>>m;
    memset(st,0x3f3f3f3f,sizeof(st));
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        st[i][0]=a[i];
    }
    s[0]=1;
    for(int i=1;i<=20;i++){
        s[i]=s[i-1]*2;
    }
    for(int i=1;i<=20;i++)
    {
        for(int j=1;j+s[i]-1<=n;j++)
        {
            st[j][i]=min(st[j][i-1],st[j+s[i-1]][i-1]);
        }
    }
    for(int i=1;i+m-1<=n;i++)
    {
        int k=log2(i+m-1-i+1);
        cout<<min(st[i][k],st[i+m-1-s[k]+1][k])<<"\n";
    }
    return 0;
}