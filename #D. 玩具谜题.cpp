#include<bits/stdc++.h>
using namespace std;
struct A{
    int x;
    string y;
}a[100005];
long long n,m;
int d=0;
long long c,p;
int main()
{
    cin>>n>>m;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i].x>>a[i].y;
    }
    for(long long i=0;i<m;i++)
    {
        cin>>c>>p;
        if(a[d].x==1)
        {
            if(c==0)
            {
                d=(d+p)%n;
            }
            if(c==1)
            {
                d=(d-p+n)%n;
            }
        }else if(a[d].x==0){
            if(c==0)
            {
                d=(d-p+n)%n;
            }else if(c==1){
                d=(d+p)%n;
            }
        }
    }
    cout<<a[d].y;
    return 0;
}