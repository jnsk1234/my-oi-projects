#include<bits/stdc++.h>
using namespace std;
int x,y,ans;
int main()
{
    cin>>x>>y;
    x/=3;
    y/=2;
    ans=min(x,y);
    cout<<ans;
    
    return 0;
}