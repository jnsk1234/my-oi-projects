#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=400;i<=499;i++)
    {
        if((i+9)%7==0&&(i-7)%9==0)
        {
            cout<<i<< ' ';
        }
    }
    
    
    return 0;
}