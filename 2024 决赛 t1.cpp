#include<bits/stdc++.h>
using namespace std;
int x[105];
int y[105];
int n;
int ans;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    x[n]=x[0];
    y[n]=y[0];
    for(int i=0;i<=n;i++)
    {
       ans+=(x[i]*y[i+1])-(x[i+1]*y[i]);
    }
    ans=abs(ans);
    ans/=2;
    cout<<ans;
}
/*
10
0 0
4 0
4 1
3 1
3 3
2 3  
2 2
1 2
1 3
0 3
*/