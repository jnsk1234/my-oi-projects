#include<bits/stdc++.h>
using namespace std;
int b,k,n;
bool flag=0;
int main()
{
    cin>>b>>k>>n;
    for(int i=k-(b%k);i<=n-b;i+=k)
    {
        if((i+b)%k==0)
        {
            flag=1;
            cout<<i<<' ';
        }
    }
    if(flag==0)
    {
        cout<<-1;
    }
    return 0;
}