#include<bits/stdc++.h>
using namespace std;
int n;
set<vector<int>>j;
vector<int> b;
void dfs(int x,int d)
{
    if(x==n)
    {
        sort(b.begin(),b.end());
        j.insert(b);
    }
    for(int i=1;i<=n-x;i++)
    {
        b.push_back(i);
        dfs(x+i,d+1);
        for(int j=0;j<b.size();j++)
        {
            if(b[j]==i)
            {
                b.erase(b.begin()+j);
                break;
            }
        }
    }
}
int main()
{
    cin>>n;
    dfs(0,0);
    for(auto i:j)
    {
        for(auto k:i)
        {
            cout<<k<<' ';
        }
        cout<<endl;
    }
    return 0;
}