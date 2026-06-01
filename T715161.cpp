#include<bits/stdc++.h>
using namespace std;
double ans1,ans2;
int n,a[100005],b[100005],q;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
        q+=b[i];
    }
    for(int i=1;i<=n;i++)
    {
        ans1+=a[i]*b[i];
    }
    ans1/=q;
    for(int i=1;i<=n;i++)
    {
        ans2+=(a[i]-ans1)*(a[i]-ans1)*b[i];
    }
    ans2/=q;
    printf("%.4f\n%.4f",ans1,ans2);
    return 0;
}