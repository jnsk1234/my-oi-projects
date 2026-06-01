#include<bits/stdc++.h>
using namespace std;
priority_queue<int> a;
int m,n,x;
struct A{
    int x,y;
}t[505];
bool cmp(A a,A b)
{
    return a.x<b.x;
}
int main()
{
    cin>>m>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>t[i].x;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>t[i].y;
    }
    sort(t+1,t+n+1,cmp);
    for(int i=1;i<=n;i++)
    {
        if(t[i].x>a.size())
        {
            a.push(-t[i].y);
        }
        else if(-a.top()<t[i].y)
        {
            m-=(-a.top());
            a.pop();
            a.push(-t[i].y);
        }else{
            m-=t[i].y;
        }
    }
    cout<<m;
    return 0;
}