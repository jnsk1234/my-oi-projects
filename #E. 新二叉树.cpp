#include<bits/stdc++.h>
using namespace std;
int n;
char l,r;
char p;
char root;
struct node{
    int l,r;
};
string s1,s2;
node a[30];
void dfs1(int x){
    cout<<char(x+'a'-1);
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
    cin>>n;
    cin>>s1>>s2;
    for(int i=1;i<=n;i++)
    {
        cin>>p>>l>>r;
        if(i==1)
        {
            root=p;
        }
        if(l!='*')
            a[p-'a'+1].l=l-'a'+1;
        if(r!='*')
            a[p-'a'+1].r=r-'a'+1;
    }
    dfs1(root-'a'+1);
    return 0;
}