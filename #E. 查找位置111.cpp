#include<bits/stdc++.h>
using namespace std;
int n;
int t[100005];
int x;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        t[x]=i;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        cout<<t[x]<<' ';
    }
    return 0;
}