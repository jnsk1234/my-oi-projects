#include<bits/stdc++.h>
using namespace std;
long long n;
long long a=1;
int main()
{
    cin>>n;
    while(n-a>0)
    {
        n-=a;
        a*=2;
    }
    cout<<n;
}