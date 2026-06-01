#include<bits/stdc++.h>
using namespace std;
long long a,ans,p=1,sum=1;
int main()
{
    cin>>a;
    while(1)
    {
        p*=2;
        sum+=p;
        ans++;
        //cout<<p<<' ';
        if(sum>=a)
        {
            cout<<(ans+1)*10;
            return 0;
        }
    }
    return 0;
}