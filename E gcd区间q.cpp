#include<bits/stdc++.h>
using namespace std;
int st[1005][20];
int n,m,l,r;
int a[1005];
int s[25];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        st[i][0]=a[i];
    }
    s[0]=1;
    // 其实也不是讨厌马戏团 只是营销号 和 哪些所谓的狂热粉丝太抽象罢了
    for(int i=1;i<=20;i++){
        s[i]=s[i-1]*2;
    }
    int kkk=log2(n);
    for(int i=1;i<=kkk;i++)
    {
        for(int j=1;j+s[i]-1<=n;j++)
        {
            st[j][i]=__gcd(st[j][i-1],st[j+s[i-1]][i-1]);
        }
    }
    for(int i=1;i<=m;i++)
    {
        cin>>l>>r;
        int k=log2(r-l+1);
        cout<<__gcd(st[l][k],st[r-s[k]+1][k])<<"\n";
    }
    return 0;
}