#include<bits/stdc++.h>
using namespace std;
int n,s,a,b,cnt;
struct A{
    int x,y;  
}c[5005];
bool cmp(A a,A b){
    return a.y<b.y;
}
int main()
{
    cin>>n>>s;
    cin>>a>>b;
    for(int i=1;i<=n;i++)
    {
        cin>>c[i].x>>c[i].y;
    }
    sort(c+1,c+n+1,cmp);
    for(int i=1;i<=n;i++)
    {
        
        if(a+b>=c[i].x)
        {
            if(s-c[i].y>=0)
            {
                s-=c[i].y;
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}