#include<bits/stdc++.h>
using namespace std;
long long n,a[100005],c,x,y;
int main()
{
    cin>>n>>a[1];
    for(long long i=2;i<=n;i++)
    {
        cin>>a[i];
        c=a[i]-a[i-1];
        if(c>0)
        {
            x+=c;
        }else{
            y-=c;
        }
    }
    cout<<max(x,y)<<endl<<abs(x-y)+1;
    return 0;
}