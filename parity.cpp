#include<bits/stdc++.h>
using namespace std;
int ans1,cnt1,ans2,cnt2;
int x,n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2==0)
        {
            ans1++;
            cnt1=i;
        }else{
            ans2++;
            cnt2=i;
        }
    }
    if(ans1==1)
    {
        cout<<cnt1;
    }else{
        cout<<cnt2;
    }
    
    return 0;
}