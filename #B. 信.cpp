#include<bits/stdc++.h>
using namespace std;
long long n,x,y,a,b,s1,s2,m,mx=-1e9;
int main()
{
    cin>>n>>x>>y>>a>>b;
    long long j=0,my=0,yd=0;
    for(long long i=1;i<=n;i++)
    {
        cin>>s1>>s2>>m;
        long long yw=m-((s1*x)+(s2*y));
        if(yw==0)
        {
            yd=0;
            my++;
            if(my>=b)
            {
                j/=2;
            }
            mx=max(mx,j);
        }else{
            my=0;
            yd++;
            j+=yw;
            if(yw>((s1*x)+(s2*y)))
            {
                j+=ceil(yw*0.5);
            }
            if(yd>=a)
            {
                j*=2;
            }
            mx=max(mx,j);
        }
    }
    cout<<mx<<' '<<j;
    return 0;
}