#include<bits/stdc++.h>
using namespace std;
long long n,cnt;
struct A{
    int x,y;
}a[100005];
bool cmp(A a,A b)
{
    return (a.x-a.y)>(b.x-b.y);
}
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i].x>>a[i].y;
    }
    sort(a+1,a+n+1,cmp);
    for(long long i=1;i<=n/2;i++)
    {
        cnt+=a[i].x;
    }
    for(long long i=(n/2)+1;i<=n;i++)
    {
        cnt+=a[i].y;
    }
    cout<<cnt;
    return 0;
}