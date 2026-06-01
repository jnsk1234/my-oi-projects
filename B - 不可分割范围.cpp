#include<bits/stdc++.h>
using namespace std;
int a[55];
int s[55];
int n;
int cnt;
int ans;
int flag=0;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        s[i]=s[i-1]+a[i];
        // cout<<s[i]<<' ';
    }
    // cout<<s[6]-s[1];
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            cnt=s[j]-s[i-1];
            // cout<<cnt<<' ';
            flag=0;
            for(int k=i;k<=j;k++)
            {
                if(cnt%a[k]==0)
                {
                    flag=1;
                }
            }
            if(flag==0)
            {
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}