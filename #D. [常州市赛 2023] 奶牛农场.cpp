#include<bits/stdc++.h>
using namespace std;
long long n,h[100005];
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>h[i];
        if(h[i]==0)
        {
            h[i]=h[i-1]+1;
        }
        if(h[i-1]>=h[i])
        {
            cout<<"NO";
            return 0;
        }
        if(h[i]==1000000000&&i!=n)
        {
            cout<<"NO";
            return 0;
        }
        if(h[i]>1000000000)
        {
            cout<<"NO";
            return 0;
        }
    }
    // if(h[n]==0)
    // {
    //     h[n]=1000000000;
    // }#D. [常州市赛 2023] 奶牛农场
    // for(long long i=n-1;i>=1;i--)
    // {
    //     if(h[i]==0)
    //     {
    //         h[i]=h[i+1]-1;
    //         if(h[i]<1){
    //             cout<<"NO";
    //             return 0;
    //         }
    //     }
    // }
    cout<<"YES"<<endl;
    for(long long i=1;i<=n;i++)
    {
        cout<<h[i]<<' ';
    }
    return 0;
}