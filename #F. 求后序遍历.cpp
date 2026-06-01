#include<bits/stdc++.h>
using namespace std;
struct node{
    int l,r;
};
node a[1005];
string s1,s2;
int s3[1005];
int s4[1005];
int dep=1;
void dfs(int root,int x,int y){
    int o=0;
    for(int i=x;i<=y;i++)
    {
        if(s4[i]==s3[root])
        {
            o=i;
            break;
        }
    }
    if(x<o)
    {
        dep++;
        a[s3[root]].l=s3[dep];
        dfs(dep,x,o-1);
    }
    if(o<y)
    {
        dep++;
        a[s3[root]].r=s3[dep];
        dfs(dep,o+1,y);
    }
}
void dfs1(int x){
    if(a[x].l!=0)
    {
        dfs1(a[x].l);
    }
    if(a[x].r!=0)
    {
         dfs1(a[x].r);
    }
    cout<<char(x+'a'-1);
}
int main()
{
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)
    {
        s3[i+1]=s1[i]-'a'+1;
    }
    for(int i=0;i<s2.size();i++)
    {
        s4[i+1]=s2[i]-'a'+1;
    }
    dfs(1,1,s2.size());
    dfs1(s3[1]);
    return 0;
}