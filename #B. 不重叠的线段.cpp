#include<bits/stdc++.h>
using namespace std;
struct A{
    long long l,r;
}a[100005];
long long n,cnt=1,flag,s,w,oooo=0;
bool cmp(A a,A b)
{
    return a.r<b.r;
}
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++){
        cin>>s>>w;
        a[i].l=max(oooo,s-w);
        a[i].r=s+w;
    }
    sort(a+1,a+n+1,cmp);
    //int l1,r1=a[1].r;
    // for(long long i=1;i<=n;i++){
    //     cout<<a[i].l<<' '<<a[i].r<<endl;
    // }
    int r1=a[1].r;
    for(long long i=2;i<=n;i++){
        if(a[i].l>r1)
        {
            cnt++;
            r1=a[i].r;
        }
    }
    cout<<cnt;
    return 0;
}
