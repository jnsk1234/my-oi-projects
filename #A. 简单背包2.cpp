#include<bits/stdc++.h>
using namespace std;
int a[20005];
int n,maxw;
int w,p;
int main()
{
    cin>>maxw>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>w>>p;
        for(int j=maxw;j>=w;j--)
        {
            a[j]=max(a[j],a[j-w]+p);
        }
    }
    cout<<a[maxw];
    return 0;
}