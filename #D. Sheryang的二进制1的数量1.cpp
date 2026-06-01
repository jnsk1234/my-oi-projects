#include<bits/stdc++.h>
using namespace std;
long long a,b;
long long t;
void qq()
{
    long long k=0;
    cin>>a>>b;
    while((a|(1ll<<k))<=b)
    {
        a=(a|(1ll<<k));
        k++;
    }
    cout<<a<<"\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        qq();
    }
    
    return 0;
}