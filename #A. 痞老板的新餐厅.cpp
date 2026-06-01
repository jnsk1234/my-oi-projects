#include<bits/stdc++.h>
using namespace std;
long long t,n,a,b;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
            if(a>=b)
            {
                cout<<n*a<<endl;
            }
            if(a<b)
            {
                long long ans=0;
                long long k=min(n,b-a);
                //cout<<ans<<endl;
                ans+=(b+(b-k+1))*k/2;
                ans+=(n-k)*a;
                cout<<ans<<endl;
            }
    }
    return 0;
}