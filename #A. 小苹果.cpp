#include<bits/stdc++.h>
using namespace std;
int n;
int a1,a2;
int main()
{
    cin>>n;
    while(n)
    {
        a1++;
        if(n%3==1&&a2==0)
        {
            a2=a1;
        }
        n-=ceil(n/3.0);
    }
    cout<<a1<<' '<<a2;
    
    return 0;
}