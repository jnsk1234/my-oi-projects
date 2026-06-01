#include<bits/stdc++.h>
using namespace std;
int n;
int cnt;
bool cheak(int a,int b,int c)
{
    while(a)
    {
        if(a%10==7||a%10==3)
        {
            return 0;
        }
        a/=10;
    }
    while(b)
    {
        if(b%10==7||b%10==3)
        {
            return 0;
        }
        b/=10;
    }
    while(c)
    {
        if(c%10==7||c%10==3)
        {
            return 0;
        }
        c/=10;
    }
    return 1;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n/3;i++)
    {
        for(int j=i;j<=n;j++)
        {   
            for(int c=j;c<=n;c++)
            {
                
                if(i+c+j==n&&c!=i&&c!=j&&i!=j&&cheak(i,j,c)){
                cnt++;
            }
            }
        }
    }
    cout<<cnt;
    return 0;
}