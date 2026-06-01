#include<bits/stdc++.h>
using namespace std;
int a[200005];
int q[200005];
int n,m;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int t,w;
        cin>>t>>w;
        a[t]++;
        a[w+1]--;
    }
    for(int i=1;i<=n;i++)
    {
        q[i]=a[i]+q[i-1];
        cout<<q[i]%2;
    }
    return 0;
}