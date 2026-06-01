#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int n;
int x,y;
int c;
int main()
{
    cin>>n;
    c=n*n;
    x=0,y=(n-1)/2;
    a[x][y]=1;
    for(int i=2;i<=c;i++)
    {
        if(a[(x-1+n)%n][(y+1+n)%n]==0)  
        {
            a[(x-1+n)%n][(y+1+n)%n]=i;
            x=(x-1+n)%n;
            y=(y+1+n)%n;
        }
        else{
            a[(x+1+n)%n][y]=i;
            x=(x+1+n)%n;
            y=y;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}