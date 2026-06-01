#include<bits/stdc++.h>
using namespace std;
string s;
string a;
int main()
{
    while(cin>>s)
    {
        a=a+s;
    }
    //cout<<a<<endl;
    long long w=0,l=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='E')
        {
            cout<<w<<':'<<l<<endl;
            break;
        }
        else{
            
                if(a[i]=='W')
                {
                    w++;
                }
                if(a[i]=='L')
                {
                    l++;
                }
            if((w>=11||l>=11)&&abs(l-w)>=2)
            {
                cout<<w<<':'<<l<<endl;
                w=0,l=0;
            }
        }
    }
    cout<<endl;
    w=0,l=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='E')
        {
            cout<<w<<':'<<l<<endl;
            break;
        }
        else{
            if(a[i]=='W')
                {
                    w++;
                }
                if(a[i]=='L')
                {
                    l++;
                }
            if((w>=21||l>=21)&&abs(l-w)>=2)
            {
                cout<<w<<':'<<l<<endl;
                w=0,l=0;
            }
            
        }
    }
    return 0;
}