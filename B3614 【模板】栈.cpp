#include<bits/stdc++.h>
using namespace std;
unsigned long long int t;
void s()
{
    string s;
    unsigned long long int n,x;
    stack<unsigned long long int> a;
    cin>>n;
    for(unsigned long long int i=1;i<=n;i++)
    {
        cin>>s;
        if(s=="push")
        {
            cin>>x;
            a.push(x);
        }
        if(s=="query")
        {
            if(a.empty()==1)
            {
                cout<<"Anguei!"<<endl;
            }else{
                cout<<a.top()<<endl;
            }
        }
        if(s=="size")
        {
            cout<<a.size()<<endl;
        }
        if(s=="pop")
        {
            if(a.empty()==1)
            {
                cout<<"Empty"<<endl;
            }else{
                a.pop();
            }
        }
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        s();    
    }
    
    
    return 0;
}