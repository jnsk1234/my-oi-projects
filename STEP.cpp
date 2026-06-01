#include<bits/stdc++.h>
using namespace std;
long long tr[800005];
// long long ans[400005];//ans
long long hz[800005];//前缀
long long qz[800005];//后缀
long long len[800005];//长度
long long ls[800005];
long long rs[800005];
long long n,q,ooo;
inline void push(long long x)
{
    long long lz=x*2;
    long long rz=x*2+1;

    if(ls[rz]!=rs[lz])
    {
        tr[x]=(qz[lz]+hz[rz]);
        tr[x]=max(tr[lz],tr[x]);
        tr[x]=max(tr[rz],tr[x]);
    }else{
        tr[x]=max(tr[rz],tr[lz]);
    }

    ls[x]=ls[lz];
    rs[x]=rs[rz];

    if(ls[rz]!=rs[lz]&&hz[lz]==len[lz])
    {
        hz[x]=hz[lz]+hz[rz];
    }else{
        hz[x]=hz[lz];
    }

    if(ls[rz]!=rs[lz]&&qz[rz]==len[rz])
    {
        qz[x]=qz[rz]+qz[lz];
    }else{
        qz[x]=qz[rz];
    }
}
inline void mtr(long long l,long long r,long long x)
{
    long long mid=(l+r)/2;
    len[x]=(r-l)+1;
    if(l==r)
    {
        tr[x]=1;
        // ans[x]=1;
        hz[x]=1;
        qz[x]=1;
        ls[x]=0;
        rs[x]=0;
        return ;
    }
    mtr(l,mid,x*2);
    mtr(mid+1,r,x*2+1);
    push(x);
}
inline void gb(long long l,long long r,long long X,long long x)
{
    long long mid=(l+r)/2;
    len[x]=(r-l)+1;
    if(l==r)
    {
        if(ls[x]==0)
        {
            tr[x]=1;
            hz[x]=1;
            qz[x]=1;
            ls[x]=1;
            rs[x]=1;
        }else if(ls[x]==1){
            tr[x]=1;
            hz[x]=1;
            qz[x]=1;
            ls[x]=0;
            rs[x]=0;
        }
        return ;
    }
    if(X<=mid) gb(l,mid,X,x*2);
    else{gb(mid+1,r,X,x*2+1);}
    push(x);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>q;
    mtr(1,n,1);
    while(q--)
    {
        cin>>ooo;
        gb(1,n,ooo,1);
        cout<<tr[1]<<"\n";
    }
    
    
    return 0;
}