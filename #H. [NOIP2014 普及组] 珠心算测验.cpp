#include<bits/stdc++.h>
using namespace std;
int n;
int a[105];
int cnt;
int b[200000+5];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            for(int k=1;k<=n;k++)
            {
                if(a[i]+a[j]==a[k])
                {
                    //cnt++;
                    if(b[a[k]]==0)
                    {
                        b[a[k]]++;
                        cnt++;
                    }
                     //cout<<i<<' '<<j<<' '<<k<<endl;
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}