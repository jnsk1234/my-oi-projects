#include<bits/stdc++.h>
using namespace std;
long long n,a[100005],x,cnt;
int main()
{
    cin>>n>>x;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(long long i=1;i<=n-1;i++)
    {
        if(a[i]+a[i+1]>x)
        {
            long long o=a[i]+a[i+1]-x;
            if(a[i+1]>=o)
            {
                a[i+1]-=o;
                cnt+=o;
            }else{
                a[i+1]=0;
                a[i]-=(o-a[i-1]);
                cnt+=o;
            }
        }
    }
    cout<<cnt;
    return 0;
}