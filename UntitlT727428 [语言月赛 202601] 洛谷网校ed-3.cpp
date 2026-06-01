#include<bits/stdc++.h>
using namespace std;
int endpp=0;
int n,m,r,c,p;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>c;
        int mx=1e9;
        for(int j=1;j<=c;j++)
        {
            cin>>r>>p;
            if(endpp<r)
            {
                if(p<mx)
                {
                    mx=p;
                }
            }

        }
        if(mx==1e9)
        {
            cout<<-1;
            exit(0);
        }
        endpp=mx;
    }
    cout<<endpp;
    return 0;
}