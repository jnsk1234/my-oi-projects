#include<bits/stdc++.h>
using namespace std;
int net[2000050];
string s1,s2,s3;
void kmp()
{
    int i=1;
    int len=0;
    while(i<s3.size())
    {
        if(s3[len]==s3[i])
        {
            len++;
            net[i]=len;
            i++;
        }else{
            if(len==0)
            {
                net[i]=0;
                i++;
            }
            else{len=net[len-1];}
        }
    }
}
int main()
{
    cin>>s1>>s2;
    s3=s2+'#'+s1;
    kmp();
    for(int i=0;i<s3.size();i++)
    {
        if(net[i]==s2.size())
        {
            cout<<i-(2*s2.size())+1<<"\n";
        }
    }
    for(int i=0;i<s2.size();i++)
    {
        cout<<net[i]<<' ';
    }
    return 0;
}