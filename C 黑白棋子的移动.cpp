#include<bits/stdc++.h>
using namespace std;
int n;
void o(int x)
{
    for(int i=1;i<=x;i++)
    {
        cout<<'o';
    }
}
void _(int x)
{
    for(int i=1;i<=x;i++)
    {
        cout<<'*';
    }
}
void ox(int x)
{
    for(int i=1;i<=x;i++)
    {
        cout<<"o*";
    }
}
void d(int x)
{
    if(x==3)
    {
        cout<<"ooo*o**--";
        for(int i=1;i<=n-x-1;i++)
        {
            cout<<"*o";
        }
        cout<<'*';
        cout<<endl;
        cout<<"o--*o**oo";
        for(int i=1;i<=n-x-1;i++)
        {
            cout<<"*o";
        }
        cout<<'*';
        cout<<endl;
        cout<<"o*o*o*--o";
        for(int i=1;i<=n-x-1;i++)
        {
            cout<<"*o";
        }
        cout<<'*';
        cout<<endl;
        cout<<"--o*o*o*o*";
        for(int i=1;i<=n-x-1;i++)
        {
            cout<<"o*";
        }
        cout<<endl;
        return ;
    }
    o(x);
    _(x);
    cout<<"--";
    ox(n-x);
    x--;
    cout<<endl;
    o(x);
    cout<<"--";
    _(x);
    ox(n-x);
    cout<<endl;
    d(x);
}
int main()
{
    cin>>n;
    d(n);
    return 0;
}