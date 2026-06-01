#include<bits/stdc++.h>
using namespace std;
int net[1000005];
string s;
int n;
void d(){
    int i=1,len=0;
    while(i<s.size())
    {
        if(s[i]==s[len])
        {
            len++;
            net[i]=len;
            i++;
        }
        else{
            if(len==0)
            {
                i++;
            }else{
                len=net[len-1];
            }
        }
    }
}
int main()
{
    cin>>n>>s;
    d();
    cout<<n-net[n-1];
    
    return 0;
}