#include<bits/stdc++.h>
using namespace std;
string s1,s2;
void dfs(int xl,int xr,int zl,int zr)
{
    int find=0; 
    for(int i=zl;i<=zr;i++)
    {
        if(s2[i]==s1[xl])
        {
            find=i;
        }
    }    
    if(zl<find)
        dfs(xl+1,find-zl+xl,zl,find-1);
    if(zr>find)
        dfs(find-zl+xl+1,xr,find+1,zr);
    cout<<s1[xl];
}
int main()
{
    cin>>s1>>s2;
    dfs(0,s1.size()-1,0,s2.size()-1);
    return 0;
}