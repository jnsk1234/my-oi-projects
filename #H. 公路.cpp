#include<bits/stdc++.h>
using namespace std;
long long n,v[100005],qv[100005],a[100005],ans,m,qm;
double d;
int main()
{
    cin>>n>>d;
    for(int i=1;i<=n-1;i++)
    {
        cin>>v[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    //cout<<ans<<endl;
    m=a[1];
    qm=0;
        for(int j=1;j<=n-1;j++)
        {
            if(a[j]<m)
            {
                m=a[j];
            }
            if(qm<v[j])
            {
                ans+=ceil((v[j]-qm)/d)*m;
                qm=ceil((v[j]-qm)/d)*d+qm-v[j];
            }else{
                qm-=v[j];
            }
        }
    
    cout<<ans;
    return 0;
}