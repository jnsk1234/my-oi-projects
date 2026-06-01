#include<bits/stdc++.h>
using namespace std;
long long a[100005],q,n,p,flag;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        cin>>p;
        for(int j=1;i<=n;j++)
        {
            if(a[j]==p)
            {
                flag=j;
                break;
            }
        }
        if(flag!=100007)
        {
            cout<<flag<<endl;
        }else{
            cout<<0<<endl;
        }
    }
    
    return 0;
}