#include<bits/stdc++.h>
using namespace std;
long long n;
long long y;
long long a,b,c;
int main()
{
    cin>>n;
    if(n==5||n==2||n==1)
    {
        cout<<-1;
        return 0;
    }
    a=b=c=n/14;
    y=n%14;
    if(y==13)
    {
        c+=3;
        b+=1;
    }
    if(y==12)
    {
        c+=4;
    }
    if(y==11)
    {
        b+=2;
        c+=1;
    }
    if(y==10)
    {
        b+=1;
        c+=2;
    }
    if(y==9)
    {
        c+=3;
    }
    if(y==8)
    {
        b+=2;
    }
    if(y==7)
    {
        b+=1;
        c+=1;
    }
    if(y==6)
    {
        c+=2;
    }
    if(y==5)
    {
        a-=1;
        c+=4;
    }
    if(y==4)
    {
        b+=1;
    }
    if(y==3)
    {
        c+=1;
    }
    if(y==2)
    {
        a-=1;
        c+=3;
    }
    if(y==1)
    {
        a-=1;  
        b-=1;
        c+=4;
    }
    cout<<a<<' '<<b<<' '<<c;
    return 0;
}