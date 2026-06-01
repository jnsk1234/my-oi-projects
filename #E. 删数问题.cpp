#include<bits/stdc++.h>
using namespace std;
string a;
int s,n;
bool flag;
int main()
{
    cin>>a;
    cin>>s;
    while(s--)
    {
        flag=0;
        for(int i=0;i<a.size()-1;i++)
        {
            if(a[i]>a[i+1]){
                a.erase(i,1);
                flag=1;
                break;
            }
        }
        if(flag==0) a.pop_back();
    }
    //int o=a.size();
    while(a.size()>0 && a[0]=='0') 
        a.erase(0,1);
    cout<<a;
    return 0;
}