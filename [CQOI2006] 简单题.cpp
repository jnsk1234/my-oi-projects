#include<bits/stdc++.h>
using namespace std;
long long l,r,x,y,n,m,ooo;
long long tree[500005];
inline long long lowbit(long long x)
{
    return (-x)&x;
}
inline void qjxg1(long long x,long long k)
{
    for(long long i=x;i<=n;i+=lowbit(i))
    {
        tree[i]+=k;
    }
}
inline void qjxg2(long long x,long long y)
{
    qjxg1(x,1);
    qjxg1(y+1,-1);
}
inline long long cx(long long x)
{
    long long ans=0;
    for(long long i=x;i>=1;i-=lowbit(i))
    {
        ans+=tree[i];
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(long long i=1;i<=m;i++) 
    {
        cin>>ooo;
        if(ooo==1)
        {
            cin>>l>>r;
            qjxg2(l,r);
        }
        else{
            cin>>l;
            cout<<(cx(l))%2<<"\n";
        }
    }
    return 0;
}