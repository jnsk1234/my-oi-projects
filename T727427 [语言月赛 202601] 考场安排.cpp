#include<bits/stdc++.h>
using namespace std;
long long n,m,r,c,cnt;
int main()
{
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
    {
        cin>>r>>c;
        m-=r*c;
        cnt++;
        if(m<=0)
            break;
    }
    cout<<cnt*2;
    
    return 0;
}