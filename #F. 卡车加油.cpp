#include<bits/stdc++.h>
using namespace std;
priority_queue<int> q;
int l,p,n;
int a,b,v[1000005];
int ans;
int main()
{
    cin>>l>>p>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        v[a]=b;
    }
    for(int i=1;i<=l;i++)
    {
        if(v[i])
        {
            q.push(v[i]);
        }
        while(p<i)
        {
            if(q.empty())
            {
                cout<<-1;
                return 0;
            }
            p+=q.top();
            ans++;
            q.pop();
        }
    }
    cout<<ans;
    return 0;
}