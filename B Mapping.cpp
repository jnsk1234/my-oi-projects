#include<bits/stdc++.h>
using namespace std;
int n,m;
int f[105];
int t1[105];
int ans1,ans2;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>f[i];
        t1[f[i]]++;
    }   
    for(int i=1;i<=m;i++)
    {
        if(t1[i]==0)
        {
            ans2=1;
        }
        if(t1[i]>=2)
        {
            ans1=1;
        }
    }   
    
    if(ans1==0)
    {
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    if(ans2==0)
    {
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}