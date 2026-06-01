#include<bits/stdc++.h>
using namespace std;
long long t,p,x,y;
int main()
{
    cin>>t>>p;
    while(t--)
    {
        cin>>x>>y;
        set<pair<long long,long long>> a;
        long long cnt=1;
        long long l=a.size(),flag=0;
        for(int i=1;;i++){
            if(i%2==1)
            {
                x=(x+y)%p;
            }
            else if(i%2==0)
            {
                y=(x+y)%p;
            }
            a.insert({x,y});
            if(a.size()==l)
            {
                cout<<"error"<<endl;
                flag=1;
                break;
            }
            l=a.size();
            if(x==0||y==0)
            {
                break;
            }
        }
        if(flag==0)
        {
            if(x==0)
            {
                cout<<1<<endl;
            }else{
                cout<<2<<endl;
            }
        }
    }  
    return 0;
} 