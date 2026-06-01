#include<bits/stdc++.h>
using namespace std;
long long b[100];
// long long p=1;
long long a,bb,t;
void qq()
{
    cin>>a>>bb;
    for(int i=70;i>=1;i--)
    {
        if((a<=b[i])&&(b[i]<=bb))
        {
            cout<<b[i]<<endl;
            return;  
        }
    }
}
int main()
{
    b[1]=1;
    for(int i=2;i<=70;i++)
    {
        b[i]=pow(2,i-1)+b[i-1];
        // cout<<b[i]<<' ';
    }
    cin>>t;
    while(t--)
    {
        qq();
    }
    
    return 0;
}