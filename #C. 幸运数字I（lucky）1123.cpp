#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int x,y,t;
bool ck(string x)
{
    for(int i=1;i<x.size();i++)
    {
        if(x[i]<=x[i-1]) return 0;
    }
    return 1;
}
int main()
{
    a[0]=1;
    for(int i=1;i<=1000000;i++)
    {
        if(ck(to_string(i)))
        {
            a[i]=a[i-1]+1;
        }else{
            a[i]=a[i-1];
        }
    } 
    cin>>t;
    while(t--)
    {
        //ans=0;
        cin>>x>>y;
        cout<<a[y]-a[x-1]<<endl;
    }
    return 0;
}