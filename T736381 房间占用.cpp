#include<bits/stdc++.h>
using namespace std;
int mn=1e9,n,a[105],k;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
        {
            mn=min(i,mn);
        }
    }
    cin>>k;
    if(a[k]==0)
    {
        cout<<k;
    }else{
        cout<<mn;
    }
    
    return 0;
}