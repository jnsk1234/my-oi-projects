#include<bits/stdc++.h>
using namespace std;
vector<int> nxt;
string s,t;
void build(string t)
{
    nxt.clear();
    nxt.push_back(0);
    int i=1,j=0,lent=t.size();
    while(i<lent)
    {
        if(t[i]==t[j])
        {
            i++;
            j++;
            nxt.push_back(j);
        }else{
            if(j==0)
            {
                nxt.push_back(0);
                i++;
            }
            else{
                j=nxt[j-1];
            }
        }
    }
}

void kmp(string s,string t)
{
    int i=0,j=0,lens=s.size(),lent=t.size();
    while(i<lens)
    {
        if(s[i]==t[j])
        {
            i++;
            j++;
        }else{
            if(j==0) i++;
            else j=nxt[j-1];
        }
        if(j==lent)
        {
            cout<<i-j+1<<"\n";
            j=nxt[j-1];
        }
    }
}
int main()
{
    cin>>s>>t;
    build(t);
    kmp(s,t);
    for(int i=0;i<nxt.size();i++)
    {
        cout<<nxt[i]<<' ';
    }
    
    return 0;
}