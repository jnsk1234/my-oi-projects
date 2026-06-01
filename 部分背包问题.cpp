#include<bits/stdc++.h>
using namespace std;
int n,t,w,po;
double ans;
struct A{
    double w,p;
    double c;
}a[105];
bool cmp(A a,A b){
    return a.c>b.c;
}
int main()
{
    cin>>n>>t;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].w>>a[i].p;
        a[i].c=a[i].p/a[i].w;
    }
    sort(a+1,a+n+1,cmp);
    int i=1;
    while(t&&i<=n){
        if(t>=a[i].w)
        {
            t-=a[i].w;
            ans+=a[i].p;
            i++;
        }else{
            ans+=t*a[i].c;
            printf("%.2f",ans);
            return 0;
        }
    }
    printf("%.2f",ans);
    return 0;
}