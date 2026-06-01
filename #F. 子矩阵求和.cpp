#include<bits/stdc++.h>
using namespace std;
long long n,m,k,xx,yy,x,y;
long long a[1005][1005],s[1005][1005];
int main()
{
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            s[i][j]=a[i][j]+s[i][j-1]+s[i-1][j]-s[i-1][j-1];
        }
    }
     while(k--)
     {
        cin>>x>>y>>xx>>yy;
        cout<<s[xx][yy]-s[xx][y-1]-s[x-1][yy]+s[x-1][y-1]<<endl;
     }   
    
    
    return 0;
}