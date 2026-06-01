#include<bits/stdc++.h>
using namespace std;
int a[505];
int n,m,k,l,r;
int x,y,v;
int main()
{
    cin>>n>>m>>k>>l>>r;
    for(int i=1;i<=k;i++)
    {
        cin>>x>>y>>v;
        if(v<=l)
        {
            a[x]+=100;
        }else if(v>=r){
            a[x]+=0;
        }else{
            a[x]+=v;
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<' ';
    }
    return 0;
}