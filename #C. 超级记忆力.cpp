#include<bits/stdc++.h>
using namespace std;
int n,q,x,sum;
map<int,int> a;
int main()
{
    cin>>n>>q;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        sum+=x;
        a[sum-1]=i;
    }
    for(int i=1;i<=q;i++)
    {
        cin>>x;
        auto id=a.lower_bound(x);
        cout<<(*id).second<<endl;
    }
    return 0;
}