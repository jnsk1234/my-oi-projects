#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,e,cnt;
int main()
{
    cin>>a>>b>>c>>d>>e;
    cnt=a+b+c+d+e;
    // cout<<cnt;
    if(0<=cnt&&cnt<=99)
    {
        cout<<"Grey";
    }
    else if(100<=cnt&&cnt<=119)
    {
        cout<<"Blue";
    }
    else if(120<=cnt&&cnt<=169)
    {
        cout<<"Green";
    }
    else if(170<=cnt&&cnt<=229)
    {
        cout<<"Orange";
    }
    else if(229<=cnt&&cnt<=500)
    {
        cout<<"Red";
    }
    return 0;
}