#include<bits/stdc++.h>
using namespace std;
int a[1000005],b[1000005],c[1000005],ac[1000005],bc[1000005],cc[1000005];
long long n,m;
long long l,r,x,ans;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>l>>r>>x;
        if(x==1)
        {
            a[l]+=x;
            a[r+1]-=x;
        }
        else if(x==2){
            b[l]+=x;
            b[r+1]-=x;
        }   
        else if(x==3){
            c[l]+=x;
            c[r+1]-=x;
        } 
    }
    for(int i=1;i<=n;i++)
    {
        ac[i]=a[i]+ac[i-1];
        bc[i]=b[i]+bc[i-1];
        cc[i]=c[i]+cc[i-1];
        if(ac[i]!=0&&bc[i]!=0&&cc[i]==0)
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}