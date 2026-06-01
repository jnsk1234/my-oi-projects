#include<bits/stdc++.h>
using namespace std;
void in()
{
    for(int i=1;i<=20;i++)
    {
        for(int j=1;j+(1<<i)-1<=n;j++)
        {
            st[j][i]=min(st[j][i-1],st[j+(1<<(i-1))][i-1]);
            ST[j][i]=min(ST[j][i-1],ST[j+(1<<(i-1))][i-1]);
        }
    }
    for(int i=2;i<=n;i++)
    {
        Log[i]=log[i/2]+1;
    }
}
int main()
{
    int m;
    cin>>m>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        st[i][0]=a[i];
        ST[i][0]=a[i];
    }
    in();
    for(int i=1;i<=m;i++)
    {
        cin>>l>>r;
        s=log[r-l+1];
        int minn=min(st[l][s],st[r-(1<<s)+1][s]);
        int maxx=max(ST[l][s],ST[r-(1<<s)+1][s]);
        cout<<maxx-minn<<"\n";
    }
    
    return 0;
}