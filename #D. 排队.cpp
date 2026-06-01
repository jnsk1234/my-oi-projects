#include<bits/stdc++.h>
using namespace std;
int in[100005];
int n,m;
int u,v;
int t;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        queue <int> q;
        vector<vector<int>> a(100005);
        int cnt=0;
        memset(in,0,sizeof(in));
        for(int i=1;i<=m;i++)
        {
            cin>>u>>v;
            a[u].push_back(v);
            in[v]++;
        }
        for(int i=1;i<=n;i++)  
        {
            if(in[i]==0)
            {
                q.push(i);
            }
        }
        while(!q.empty())
        {
            auto h=q.front();
            q.pop();
            cnt++;
            for(auto i:a[h])
            {
                in[i]--;
                if(in[i]==0)
                {
                    q.push(i);
                }
            }
        }
        if(cnt==n)
        {
            cout<<"N"<<endl;
        }else{
            cout<<"Y"<<endl;
        }
    }
    
    
    return 0;
}