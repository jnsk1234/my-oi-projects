#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[50];
long long p=1;
inline void d(long long x)
{
    if(x==1)
    {
        cout<<"2(0)";
        return ;
    }else if(x==2)
    {
        cout<<"2";
        return ;
    }
    long long u,y;
    for(long long i=19;i>=1;i--)
    {
        if(x>=a[i]) 
        {
            u=i;
            y=a[i];
            break;
        }
    }
    if(u!=1)
    {
        cout<<"2(";
        d(u);
        cout<<")";
    }else{
        cout<<2;
    }
    if((x-y)!=0)
    {
        cout<<"+";
        d(x-y);
    }
}
int main()
{
    cin>>n;
    for(long long i=1;i<=19;i++)
    {
        p*=2;
        a[i]=p;
    }
    d(n);
    
    return 0;
}
// 2(2(2+2(0))+2)+2(2(2+2(0)))+2(2(2)+2(0))+2+2(0)
// 2(2(2+2(0))+2)+2(2(2+2(0)))+2(2(2)+2(0))+2+2(0)