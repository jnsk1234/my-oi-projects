#include<bits/stdc++.h>
using namespace std;
struct AAA{
    int a,b,c;
}s[3000005];
int n,m,ans,a,b,c,k=1;
int h;
map<string,int> aa;
int cnt=1;
string ss;
int as[3000005];
bool cmp(int a ,int b){
    return a>b;
}
int main()
{
    cin>>m>>n;
    h=21-m;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b>>c>>ss;
        if(aa[ss]==0)
        {
            aa[ss]=cnt;
            cnt++;
        }
        s[aa[ss]].a+=a;
        s[aa[ss]].b=b;
        s[aa[ss]].c=c;
    }
    for(int i=1;i<cnt;i++)
    {
        for(int j=1;j<=(s[i].a + s[i].c - 1) / s[i].c;j++)
        {
            if(s[i].a>s[i].c)
            {
                as[k]=(s[i].b*s[i].c);
                k++;
                s[i].a-=s[i].c;
            }else{
                as[k]=(s[i].b*s[i].a);
                k++;
            }
        }
    }
    sort(as+1,as+k+1,cmp);
    for(int i=1;i<=h;i++)
    {
        ans+=as[i];
    }
    cout<<ans;
    return 0;
}