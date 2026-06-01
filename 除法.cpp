#include<bits/stdc++.h>
using namespace std;
long long n;
bool a(long long n)
{
    for(long long i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    cin>>n;
    if(a(n))
    {
        cout<<0;
    }else{
        cout<<1;
    }
    
    return 0;
}