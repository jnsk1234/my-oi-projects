#include<bits/stdc++.h>
using namespace std;
int a,b,ans1,ans2,n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        if(a>=500&&b<500)
        {
            ans1++;
            ans2+=b;
        }
    }
    cout<<ans1<<' '<<ans2;
    
    return 0;
}