#include<bits/stdc++.h>
using namespace std;
int a[10005][20005];
int n,maxw;
int w,p;
int main()
{
    cin>>maxw>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>w>>p;
        for(int j=1;j<=maxw;j++)
        {
            if(j-w<0)
            {
                a[i][j]=a[i-1][j];
            }else{
                a[i][j]=max(a[i-1][j],a[i-1][j-w]+p);
            }
        }
    }
    cout<<a[n][maxw];
    return 0;
}