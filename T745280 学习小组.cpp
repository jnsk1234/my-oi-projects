#include<bits/stdc++.h>
using namespace std;
int a[500005][3];
int n,x;
int p[500005];
int main()
{
    cin>>n;
    for(int i=1;i<=2*n;i++)
    {
        cin>>x;
        if(a[x][1]==0)
        {
            a[x][1]=i;
        }else{
            a[x][2]=i;
            p[a[x][1]] = a[x][2];
            p[a[x][2]] = a[x][1];
        }
    }
    for(int i=1;i<=2*n;i++)
    {
        cout << p[i] << " ";
    }
    
    return 0;
}