#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> a(1005);
int in[105];
int n;
int u,v;
queue<int> q;
vector<int> ans;
void dag()
{
    while(!q.empty())
    {
        auto h=q.front();
        q.pop();
        ans.push_back(h);
        for(auto i:a[h])
        {
            in[i]--;
            if(in[i]==0)
            {
                q.push(i);
            }
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;;j++)
        {
            u=i;
            cin>>v;
            if(v==0)
            {
                break;
            }
            a[u].push_back(v);
            in[v]++;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(in[i]==0)
        {
            q.push(i);
        }
    }
    dag();
    for(auto i:ans)
    {
        cout<<i<<' ';
    }
    return 0;
}