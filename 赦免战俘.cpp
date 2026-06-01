#include<bits/stdc++.h>
using namespace std;
int n;
int a[2002][2002];
void d(int x,int y,int z)
{
    if(z==1)
    {
        return ;
    }
    for(int i=x;i<=x+(z/2)-1;i++)
    {
        for(int j=y;j<=y+(z/2)-1;j++)
        {
            a[i][j]=0;
        }
    }
    d(x+(z/2),y,z/2);
    d(x,y+(z/2),z/2);
    d(x+(z/2),y+(z/2),z/2);
}
int main()
{
    cin>>n;
    for(int i=1;i<=pow(2,n);i++)
    {
        for(int j=1;j<=pow(2,n);j++)
        {
            a[i][j]=1;
        }
    }
    // cout<<pow(2,n);
    d(1,1,pow(2,n));
    for(int i=1;i<=pow(2,n);i++)
    {
        for(int j=1;j<=pow(2,n);j++)
        {
           cout<<a[i][j]<<' ';
        }
        cout<<"\n";
    }
    return 0;
}
// 0 0 0 0 0 0 0 1
// 0 0 0 0 0 0 1 1
// 0 0 0 0 0 1 0 1
// 0 0 0 0 1 1 1 1
// 0 0 0 1 0 0 0 1
// 0 0 1 1 0 0 1 1
// 0 1 0 1 0 1 0 1
// 1 1 1 1 1 1 1 1
