#include<bits/stdc++.h>
using namespace std;
int n;
int c[100005],a,b;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>c[i];
    }
    int i,j;
    for(i=1,j=n;i<=j;)
    {
        if(a<=b)
        {
            a+=c[i];
            i++;
        }else{
            b+=c[j];
            j--;
        }
    }
    cout<<i-1<<' '<<n-(i-1);
    return 0;
}