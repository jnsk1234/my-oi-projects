#include<bits/stdc++.h>
using namespace std;
int a,b,t;
int d[100];
void qqq(){
    cin>>a>>b;
        for(int i=1;i<=31;i++)
        {
            if((a>>i)==b)
            {
                cout<<"Yes"<<endl;
                return ;
            }
        }
        if(a!=0)
        {
            for(int i=1;i<=31;i++)
            {
                if(d[i]==b)
                {
                    cout<<"Yes"<<endl;
                    return ;
                }
            }
        }
        cout<<"No"<<endl;
        return ;
}
int main()
{
    for(int i=1;i<=31;i++)
    {
        d[i]=pow(2,i);
    }
    cin>>t;
    while(t--)
    {
        qqq();
    }
    
    
    return 0;
}