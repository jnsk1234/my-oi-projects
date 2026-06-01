#include <bits/stdc++.h>
using namespace std;
long long n, m;
long long a[1000005];
bool cheak(long long x)
{
    long long sum = 0;
    for(long long i=1;i<=n;i++)
    {
        if(a[i]-x>0)
        {
            sum+=(a[i]-x);
        }
    }
    return sum>=m;
}
int main()
{
    //cout<<"llllll";
    cin >> n >> m;
    long long r = 0;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
        r = max(r, a[i]);
    }
    long long l = 0, mid = (l + r) / 2;
    while (l <= r)
    {
        mid=(l+r)/2;
        if (cheak(mid))
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << l-1;
}
