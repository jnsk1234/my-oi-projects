#include<bits/stdc++.h>
using namespace std;
long long a[1000005];
long long n;
long long cnt=2;
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(long long i=2;i<=n-1;i++)
    {
        if(a[i-1]>a[i]||a[i]>a[i+1])
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}