#include<bits/stdc++.h>
using namespace std;
int tr[400005];
int dis[400005];
int a[100005];
int x,y,n,m,ooo;
void xf(int l,int r,int id)
{
    if (dis[id] == 0) return;
    int mid=(l+r)/2;
    tr[id*2]=((mid-l+1)-tr[id*2]);
    tr[id*2+1]=((r-mid)-tr[id*2+1]);

    dis[id*2]^=1;
    dis[id*2+1]^=1;

    dis[id]=0;
}

void mtr(int l,int r,int id)
{
    int mid=(l+r)/2;
    if(l==r)
    {
        tr[id]=a[l];
        return ;
    }
    mtr(l,mid,id*2);
    mtr(mid+1,r,id*2+1);
    tr[id]=tr[id*2]+tr[id*2+1];
}

int cx(int L,int R,int l,int r,int id)
{
    int ans=0;
    if(L<=l&&r<=R)
    {
        return tr[id];
    }
    xf(l,r,id);
    int mid=(l+r)/2;
    if(L<=mid)
    {
        ans+=cx(L,R,l,mid,id*2);
    }
    if(mid+1<=R)
    {
        ans+=cx(L,R,mid+1,r,id*2+1);
    }
    return ans;
}

void add(int L,int R,int l,int r,int id)
{
    int mid=(l+r)/2;
    if(L<=l&&r<=R)
    {
        dis[id]^=1;
        tr[id]=((r-l+1)-tr[id]);
        return ;
    }
    xf(l,r,id);
    if(L<=mid)
    {
        add(L,R,l,mid,id*2);
    }
    if(mid+1<=R)
    {
        add(L,R,mid+1,r,id*2+1);
    }
    tr[id]=tr[id*2]+tr[id*2+1];
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    mtr(1,n,1);
    for(int i=1;i<=m;i++)
    {
        cin>>ooo;
        if(ooo==0)
        {
            cin>>x>>y;
            add(x,y,1,n,1);
        }else{
            cin>>x>>y;
            cout<<cx(x,y,1,n,1)<<"\n";
        }
    }
    return 0;
}