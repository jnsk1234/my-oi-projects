#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int op,u,v;
int t[5005];
int main()
{
    cin>>n>>m>>k;
    vector<vector<int>> a(n);
    for(int i=1;i<=m;i++)
    {
        a[0].push_back(i);
    }
    for(int i=1;i<=k;i++)
    {
        cin>>op>>u>>v;
        if(op==1)
        {
            int f = t[u];
            auto it = lower_bound(a[f].begin(), a[f].end(), u);
            a[f].erase(it);
            it = lower_bound(a[v].begin(), a[v].end(), u);
            a[v].insert(it, u);
            t[u] = v;
        }
        if(op==2){
            if(a[v].size()<u)
            {
                cout<<-1<<endl;
            }else{
                cout<<a[v][u-1]<<endl;
            }
        }
    }
    
    return 0;
}