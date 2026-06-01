#include<bits/stdc++.h>
using namespace std;
int c1[1005][1005];
int u,v;
int n,m;
int main()
{
    cin>>n>>m;
    vector<set<int>> c2(n+10);
    for(int i=1;i<=m;i++)
    {
        cin>>u>>v;
        c1[u][v]=1;
        c1[v][u]=1;
        c2[u].insert(v);
        c2[v].insert(u);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<c1[i][j]<<" ";
        }
        cout<<endl;
    }
   for(int i=1;i<=n;i++)
   {
        cout<<c2[i].size()<<" ";
            for(auto j:c2[i])
            {
                cout<<j<<' ';
            }
            cout<<endl;
        
   }
        
    return 0;
}