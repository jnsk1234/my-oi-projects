#include<bits/stdc++.h>
using namespace std;
long long t;
long long n;
long long ans;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=sqrt(n)/3;
        cout<<ans<<endl;
    }
    return 0;
}