#include<bits/stdc++.h>
using namespace std;
int n;
int x;
int a[100005];
int y[100005];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y[i];
        a[x]++;//统计主场
    }
    for(int i=1;i<=n;i++)
    {
        cout<<n-1+a[y[i]]<<' '<<(n-1)*2-(n-1+a[y[i]])<<endl;
    }
    return 0;
}