#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,e;
int main()
{
    for(int i=1;i<=16;i++)
    {
        cin>>e;
        if(e==1)
        {
            a++;
        }
        if(e==2)
        {
            b++;
        }
        if(e==3)
        {
            c++;
        }
        if(e==4)
        {
            d++;
        }
    }
    
        if(a==3)
        {
            cout<<"1";
        }
        if(b==3)
        {
            cout<<2;
        }
        if(c==3)
        {
            cout<<3;
        }
        if(d==3)
        {
            cout<<4;
        }
    
    return 0;
}