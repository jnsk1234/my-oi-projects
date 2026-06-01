#include<bits/stdc++.h>
using namespace std;
int a[30005][26];
string s;
int cnt=1;
int ans;
int main()
{
    while(cin>>s)
    {
        int o=0;
        for(char i:s)
        {
            if(a[o][i-'A']==0)
            {
                a[o][i-'A']=cnt;
                cnt++;
            }
            o=a[o][i-'A'];
        }
    }
    for(int i=0;i<=30000;i++)
    {
        for(int j=0;j<26;j++)
        {
            if(a[i][j]!=0)
            {
                ans++;
            }
        }
    }
    cout<<ans+1;
    return 0;
}