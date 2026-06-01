#include<bits/stdc++.h>
using namespace std;
int n,x;
int a[100000+5];
int nm,sum;
int main()
{
    cin>>n>>x;
    a[1]=x;
    for(int i=2;i<=n;i++)
    {
        a[i]=(379*a[i-1]+131)%997;
    }
    sum=nm=a[1];
    for(int i=2;i<=n;i++)
    {
        nm=min(a[i],nm);
        sum+=min(a[i],nm);
    }
    cout<<sum;
    return 0;
}