#include<bits/stdc++.h>
using namespace std;
vector<int> a[105];
int n;
int u,v;
int main()
{
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        cin>>u>>v;
        a[u].push_back(v);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<a[i].size()<<' ';
    }
    
    return 0;
}