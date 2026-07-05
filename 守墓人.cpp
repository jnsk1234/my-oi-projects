#include<bits/stdc++.h>
using namespace std;
int a[200005];
int tree1[200005];
int tree2[200005];
int n,m,op,l,r,k;
inline int lowbit(int x)
{
    return (-x)&x;
}
inline int qzh(int l);
{
    int ans=0,ans1=0;
    for(int i=l;i>=1;i-=lowbit(i))
    {
        ans+=tree1[i];
        ans1+=tree2[i];
    }
    return ans1*(l+1)-ans;
}
inline int hzh(int l,int k)
{
    int k1=l*k;
    for(int i=l;i<=n;i+=lowbit(i))
    {
        tree1[i]+=k1;
        tree2[i]+=k;
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        hzh(i,a[i]-a[i-1]);
    }
    for(int i=1;i<=m;i++)
    {
        cin>>op;
        if(op==1)
        {
            cin>>l>>r>>k;
            hzh(l,k);
            hzh(r+1,-k);
        }
        if(op==2)
        {
            cin>>k;
            hzh(1,k);
            hzh(2,-k);
        }
        if(op==3)
        {
            cin>>k;
            hzh(1,-k);
            hzh(2,k);
        }
        if()
    }
    

    return 0;
}