#include<bits/stdc++.h>
using namespace std;
int n;
int m,ans;
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>m;
        ans^=m;
    }
    cout<<ans;
    return 0;
}