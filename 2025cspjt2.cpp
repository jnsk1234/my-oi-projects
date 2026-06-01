#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int a[15][15];
int b[150];
int n,m;
int main() {
    cin>>n>>m;
    for(int i=1;i<=n*m;i++)
    {
        cin>>b[i];
    }
    int xx=b[1];
    sort(b+1,b+n*m+1,cmp);
    for(int i=1;i<=n*m;i++)
    {
        int ppp=0,ppo=0;
        if(i%n==0)
        {
            ppp=n;
        }else
        {
            ppp=i%n;
        }
        if(i/n*n==i)
        {
            ppo=i/n;
        }else{
            ppo=i/n+1;
        }
        a[ppp][ppo]=b[i];
    }
    // cout<<xx<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            // cout<<a[i][j]<<' ';
            if(a[i][j]==xx)
            {
                // cout<<<<' '<<j;
                if(j%2==0)
                {
                    cout<<j<<' '<<n-i+1;
                }else{
                    cout<<j<<' '<<i;
                }
            }
        }
        // cout<<endl;
    }
    return 0;
}
/*
4 5 
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
*/