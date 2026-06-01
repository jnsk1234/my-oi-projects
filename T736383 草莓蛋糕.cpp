#include<bits/stdc++.h>
using namespace std;
int a[505][505],n,m,d,D,ans,flag=0;
int main()
{
    cin>>n>>m>>d;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    D=d;
    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            for(int j=1;j<=m;j++)
            {
                if(D==0&&a[i][j]==1)
                {
                    D+=d;
                }else if(D==0&&a[i][j]!=1){
                    flag=1;
                    break;
                }
                D--;
                if(a[i][j]==1)
                {
                    ans++;
                }
            }
        }else{
            for(int j=m;j>=1;j--)
            {
                if(D==0&&a[i][j]==1)
                {
                    D+=d;
                }else if(D==0&&a[i][j]!=1){
                    flag=1;
                    break;
                }
                D--;
                if(a[i][j]==1)
                { 
                    ans++;
                }
            }
        }
        if(flag==1)
        {
            break;;
        }
    }
    cout<<ans;
    return 0;
}