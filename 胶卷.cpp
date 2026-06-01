#include<iostream>
using namespace std;
long long f(int n)
{
    long long e=1;
    if(n>0)
    e=n*f(n-1);
    cout<<n<<"£¡="<<e<<endl;
    return e;
}
int main()
{
    int m=20000;
    f(m);
    return 0;
}
