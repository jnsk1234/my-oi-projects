#include<bits/stdc++.h>
using namespace std;
long long q,x,ans;
int main()
{
    cin>>q>>x;
    ans=-(q*(q-1))*x/2;
    cout<<ans;
    return 0;
}