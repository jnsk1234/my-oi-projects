#include<bits/stdc++.h>
using namespace std;
long long x,y,t,p;
long long flag;
int main()
{
    cin>>t>>p;
    while(t--)
    {
        flag=0;
        set<pair<long long,long long>> a;
        cin>>x>>y;
        long long l=a.size();
        for(int i=1;;i++)
        {
            if(i%2==1)
            {
                x=(x+y)%p;
            }else if(i%2==0)
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
            if(y==0||x==0)
            {
                break;
            }
        }
        if(flag==0)
        {
            if(x==0)
            {
                cout<<1<<endl;
            }else if(y==0){
                cout<<2<<endl;
            }
        }
    }
    
    return 0;
}