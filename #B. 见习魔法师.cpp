#include<bits/stdc++.h>
using namespace std;
long long x,y,m;
int main()
{
    cin>>x>>y>>m;
    long long i;
    for(i=1;;i++)
    {
        x-=i;
        y-=i;
        if(x<0)
        {
            m-=abs(x);
            x=0;
        }
        if(y<0)
        {
            m-=abs(y);
            y=0;
        }
        if(m<0)
        {
            break;
        }
    }
    cout<<i-1;
    return 0;
}