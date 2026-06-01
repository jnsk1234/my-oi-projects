#include<bits/stdc++.h>
using namespace std;
int n,m;
char a[1005][1005];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=2*n+1;i++)
    {
        for(int j=1;j<=2*m+1;j++)
        {
            if(i%2==1&&j%2==1)
            {
                a[i][j]='+';
            }
            if(i%2==1&&j%2==0)
            {
                a[i][j]='-';
            }
            if(i%2==0&&j%2==1)
            {
                a[i][j]='|';
            }
            if(i%2==0&&j%2==0)
            {
                a[i][j]=' ';
            }
        }
    }
    for(int i=1;i<=2*n+1;i++)
    {
        for(int j=1;j<=2*m+1;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}