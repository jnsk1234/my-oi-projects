#include<bits/stdc++.h>
using namespace std;
long long f[25][25][25];
long long a,b,c;
long long ans;
long long w(long long a,long long b,long long c){
    if(a<=0||b<=0||c<=0)
    {
        return 1;
    }
    if(a>20||b>20||c>20)
    {
        return w(20,20,20);
    }
    if(a<b&&b<c)
    {
        if(f[a][b][c]==0)
        {
            f[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
        }
        return f[a][b][c];
    }else{
        if(f[a][b][c]==0)
        {
            f[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
        }
        return f[a][b][c];
    }
}
int main()
{
    // memset(f,-1,sizeof(f));
    while(cin>>a>>b>>c)
    {
        if(a==-1&&b==-1&&c==-1)
        {
            return 0;
        }
        ans=w(a,b,c);
        printf("w(%lld, %lld, %lld) = %d\n",a,b,c,ans);
    }
    return 0;
}