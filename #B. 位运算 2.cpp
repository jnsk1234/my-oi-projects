#include<bits/stdc++.h>
using namespace std;
long long a,b;
int main()
{
    cin>>a>>b;
    cout<<(a<<b)<<endl;
    cout<<(a>>b)<<endl;
    long long c=a>>b;
    cout<<(c&1)<<endl;
    if((c&1)==0)
    {
        cout<<a<<endl;
    }else{
        cout<<a-(1<<b)<<endl;
    }
    cout<<(a|(1<<b))<<endl;//1
    long long d=(pow(2ll,b));
    cout<<(a^d)<<endl;
    return 0;
}