#include<bits/stdc++.h>
using namespace std;
int n,w;
int p;
int x;
int t[605];
int main()
{
    cin>>n>>w;
    for(int i=1;i<=n;i++)
    {
        //cout<<i<<' ';
        cin>>x;
        t[x]++;
        int f=max(i*w/100,1),sum=0;
        //cout<<f<<' ';
        for(int j=600;j>=0;j--)
        {
            
            f=f-t[j];
            if(f<=0)
            {  
                cout<<j<<' ';
                break; 
            }
        }
    }
    return 0;
}