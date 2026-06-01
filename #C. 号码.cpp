#include<bits/stdc++.h>
using namespace std;
string s;
int cnt;
bool cheak(int a,int b,int c,int d)
{
    for(int i=0;i<=9;i++)
    {
        if(s[i]=='o')
        {
            if(a!=i&&b!=i&&c!=i&&d!=i)
                return 0;
        }
        if(s[i]=='x')
        {
            if(a==i||b==i||c==i||d==i)
                return 0;
        }
    }
    return 1;
}
int main()
{
    cin>>s;
    for(int a=0;a<=9;a++)
    {
        for(int b=0;b<=9;b++)
        {
            for(int c=0;c<=9;c++)
            {
                for(int d=0;d<=9;d++)
                {
                    if(cheak(a,b,c,d))
                    {
                        cnt++;
                    }
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}