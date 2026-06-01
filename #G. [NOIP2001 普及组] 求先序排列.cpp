#include<bits/stdc++.h>
using namespace std;
struct node{
    int l,r;
};
node a[1005];
string s1,s2;
int s3[1005];
int s4[1005];
int dep;
void dfs(int root,int x,int y){
    int o=0;
    for(int i=x;i<=y;i++)
    {
        if(s3[i]==s4[root])
        {
            o=i;
            break;
        }
    }
    if(o<y)
    {
        dep--;
        a[s4[root]].r=s4[dep];
        dfs(dep,o+1,y);
    }
    if(x<o)
    {
        dep--;
        a[s4[root]].l=s4[dep];
        dfs(dep,x,o-1);
    }
}
void dfs1(int x){
    cout<<char(x+'A'-1);
    if(a[x].l!=0)
    {
        dfs1(a[x].l);
    }
    if(a[x].r!=0)
    {
         dfs1(a[x].r);
    }
}
int main()
{
    cin>>s1>>s2;
    dep=s1.size();
    for(int i=0;i<s1.size();i++)
    {
        s3[i+1]=s1[i]-'A'+1;
    }
    for(int i=0;i<s2.size();i++)
    {
        s4[i+1]=s2[i]-'A'+1;
    }
    dfs(dep,1,s2.size());
    dfs1(s4[s2.size()]);
    return 0;
}