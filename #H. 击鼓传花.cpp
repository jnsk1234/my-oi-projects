#include<bits/stdc++.h>
using namespace std;
int T;
void solve()
{
    int n,m;
    queue <int> q;
    vector<vector<int>> a(100005*2+10);
    map<string,int> mp;
    int cnt=0;
    int u,v;
    int cnnt=1;
    string s1,s2;
    int in[100005*2]={0};
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s1>>s2;
        if(mp[s1]==0)
        {
             mp[s1]=cnnt;
             cnnt++;
        }
            u=mp[s1];
        
        if(mp[s2]==0)
        {
             mp[s2]=cnnt;
             cnnt++;
        }
        v=mp[s2];
        a[u].push_back(v);
        in[v]++;
    }
    for(int i=1;i<=cnnt;i++)  
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
        if(cnt==cnnt)
        {
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
}
int main()
{
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}