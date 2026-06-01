#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main()
{
    cin>>a>>b>>c;
    if(a>=30&&a<=70)
    {
        cout<<a;
    }else if((b>=30&&b<=70)||(c>=30&&c<=70)){
        // cout<<min(b,c);
        if((b>=30&&b<=70)&&(c>=30&&c<=70))
        {
            cout<<min(b,c);
        }else if(b>=30&&b<=70) 
        {
            cout<<b;
        }   
        else{
            cout<<c;
        }
    }
    else{
        cout<<0;
    }
    
    return 0;
}