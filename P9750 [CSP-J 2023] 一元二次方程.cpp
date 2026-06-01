#include<bits/stdc++.h>
using namespace std;
long long p;
int T,M;
long long a,b,c;
int main()
{
    cin>>T>>M;
    while(T--)
    {
        cin>>a>>b>>c;
        p=b*b-4*a*c;
        if(p<0)
        {
            cout<<"NO";
        }
    }
}