#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> a(505);
int fa[505];
int b[505];
int dis[505];
int n,f,q,o,m;
void find(int x){
    dis[x]++;
    if(x>0)
        find(fa[x]);
}
int main()
{
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        cin>>f;
        fa[i]=f;
    }
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        memset(dis,0,sizeof(dis));
        cin>>m;
        for(int t=1;t<=m;t++){
            cin>>b[t];
            find(b[t]);
        }
        for(int j=n;j>=0;j--)
        {
            if(dis[j]==m)
            {
                cout<<j<<endl;
                break;
            }
        }
    }
    return 0;
}