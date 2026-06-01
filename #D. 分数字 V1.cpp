#include<bits/stdc++.h>
using namespace std;
int n;
int a[20];
void dfs(int x,int d)
{
    if(x==n)
    {
        for(int i=0;i<d;i++)
        {
            cout<<a[i]<<' ';
        }
        cout<<endl;
    }
    for(int i=1;i<=n-x;i++)
    {
        a[d]=i;
        dfs(x+i,d+1);
        a[d]=0;
    }
}
int main()
{
    cin>>n;
    dfs(0,0);
    return 0;
}