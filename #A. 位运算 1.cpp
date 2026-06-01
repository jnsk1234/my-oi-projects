#include<bits/stdc++.h>
using namespace std;
long long a,b,k;
int main()
{
    cin>>a>>b>>k;
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;
    long long o=~a;
    cout<<o<<endl;
    cout<<(a<<k)<<endl;
    cout<<(a>>k)<<endl;
    return 0;
}