#include<bits/stdc++.h>
using namespace std;
int n,m,T;
int u,v;
void o()
{
    scanf("%d %d\n",&n,&m);
    vector<set<int>> c(n+10);
    for(int i=1;i<=m;i++)
    {
        scanf("%d %d",&u,&v);
        c[u].insert(v);
    }
    for(int i=1;i<=n;i++)
    {
        for(auto i:c[i])
        {
            cout<<i<<' ';
        }
        cout<<endl;
    }

}
int main()
{
    cin>>T;
    while(T--)
    {
        o();
    }
    
    
    return 0;
}