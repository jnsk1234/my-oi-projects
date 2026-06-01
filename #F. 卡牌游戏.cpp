#include<bits/stdc++.h>
using namespace std;
long long n,a[100005],q[100005],cnt;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        q[i]=q[i-1]+a[i];
    }
    for(int i=2;i<=n;i++)
    {
        
        if(q[i]>0)
        {
            cnt+=q[i];
        }
    }
    cout<<cnt;
    return 0;
}