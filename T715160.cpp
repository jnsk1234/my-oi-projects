#include<bits/stdc++.h>
using namespace std;
int a,b,c,ans,x,t,aa,y;
int main()
{
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>a>>b>>c;
        for(int y=1;b*y<c;y++)
        {
           aa=c-b*y;
           if(a%aa==0)
           {
            x=a/aa;
            if(x>0)
            {
                ans++;
            }
           }
        }
        cout<<ans<<endl;
    }
    return 0;
}