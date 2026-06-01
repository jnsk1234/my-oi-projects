#include<bits/stdc++.h>
using namespace std;
int cnt;
void f(int n,int m){
    cnt++;
    if(n&&m)
    {
        for(int i=1;i<=m;i++)
        {
            f(n-1,i-1);
        }
    }
}
int main()
{
   // cin>>cnt;
    f(4,4);
    cout<<cnt;
    
    
    return 0;
}