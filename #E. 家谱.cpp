#include<bits/stdc++.h>
using namespace std;
char c;
string s,fat;
map<string,string> fa;
string find(string x)
{
    if(fa[x]==x) return fa[x];
    return fa[x]=find(fa[x]);
}
void ma(string x,string y)
{
    string xx=find(x);
    string yy=find(y);
    if(xx!=yy)
    {
        fa[yy]=xx;
    }
}
int main()
{
    while(cin>>c)
    {
        if(c=='$')
        {
            return 0;
        }
        cin>>s;
        if(c=='#')
        {
            // fat=s;
            if(""==fa[s]) fa[s]=s;
            fat=s;
        }
        if(c=='+')
        {
            fa[s]=fat;
        }
        if(c=='?')
        {
            cout<<s<<' '<<find(s)<<endl;
        }
    }
    return 0;
}