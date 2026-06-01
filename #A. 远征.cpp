#include<bits/stdc++.h>
using namespace std;
int x,k,N,cnt;
int main()
{
    cin>>N;
    for(int i=100;i>=1;i--)//x
    {
        for(int j=1;j<=N;j++)//k
        {
            if(1092*j+364*i==N)
            {
                cout<<i<<endl<<j;
                return 0;
            }
        }
    }
    //cout<<12334;
    return 0;
}