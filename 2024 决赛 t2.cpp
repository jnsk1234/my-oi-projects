#include<bits/stdc++.h>
using namespace std;
bool a[1000000+5];
int n;
int mx=-1;
int ans1=0,ans2=0;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x,y;
        cin>>x>>y;
        mx=max(mx,y);
        for(int j=x;j<y;j++)
        {
            a[j]=1;
        }
    }
    int x1=0,x2=0;
    bool flag=0;
    a[0]=0;
    for(int i=1;i<=mx;i++)
    {
        if(a[i]==1)
        {
            flag=1;
            if(a[i-1]==a[i])
            {
                
                x1++;
                ans1=max(x1,ans1);
            }
            if(a[i-1]!=a[i])
            {
                
                x1=1;
                ans1=max(x1,ans1);
            }
        }
        if(flag==1&&a[i]==0)
        {
            if(a[i-1]==a[i])
            {
              x2++;
              ans2=max(x2,ans2);
            }
            if(a[i-1]!=a[i])
            {
              x2=1;
              ans2=max(x2,ans2);
            }
        }
        
    }
    cout<<ans1<<' '<<ans2;
}