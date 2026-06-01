#include<bits/stdc++.h>
using namespace std;
string s1,s2;
void cheak(string s1)
{
    int a=1;
    int n=0;
    int res;
    int cnt=0;
    //cout<<s1<<' ';
    string s;
    for(int i=0;i<s1.size();i++)
    {
        n=n*2+(s1[i]-'0');
    }
    res=n;
    while(res)
    {
        s=char((res%3)+'0')+s;
        res/=3;
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s2[i])
        {
            cnt++;
        }
    }
    if(cnt==1)
    {
        cout<<n<<' ';
        exit(0);
    }
    return ;
}
int main()
{
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]=='0')
            s1[i]='1';
        else
            s1[i]='0';
        cheak(s1);
        if(s1[i]=='0')
            s1[i]='1';
        else
            s1[i]='0';
    }
    return 0;
}