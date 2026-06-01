#include<bits/stdc++.h>

using namespace std;
long long n;
long long a=2;
int main()
{
    cin>>n;
    if(n%2==0)
    {
        while(n)
        {
            long long a=2;
            while(n>=a*2)
            {
                a*=2;
            }
            cout<<a<<' ';
            n-=a;
            //cout<<a<<' ';
        }
        
        
    }else{
        cout<<-1;
    }
    
    
    return 0;
}