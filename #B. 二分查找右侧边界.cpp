#include<bits/stdc++.h>
using namespace std;
int n,a[100005],q,c;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cin>>q;
    while(q--)
    {
        int ans;
        cin>>c;
        ans=upper_bound(a+1,a+n+1,c)-a-1;
        if(a[ans]==c)
        {
            cout<<ans<<' ';
        }else{
            cout<<-1<<' ';
        }
    }
    return 0;
}