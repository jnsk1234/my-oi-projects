#include<bits/stdc++.h>
using namespace std;
int st[62][100005];
int n,m,l,r,t;
int a[100005];
int s[25];
int cnt[100005];
char ch;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>ch;
        if(ch=='L')
        {
            st[0][i]=-1;
        }else{
            st[0][i]=1;
        }
            
    }
    cin>>t;
    int kkk=log2(t);
    for(int i=1;i<=kkk;i++)
    {
        for(int j=1;j+pow(2,i)-1<=n;j++)
        {
            int f=j+pow(2,i);
            st[i][j]=max(st[i-1][j],st[i-1][f]);
        }
    }
    for(int i=1;i<=n;i++)
    {
        cnt[i+st[kkk][i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<cnt[i]<<' ';
    }
    return 0;
}