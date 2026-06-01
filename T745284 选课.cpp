#include<bits/stdc++.h>
using namespace std;
int n,m;
int k,a[305][305];
int t,x[305],s[305];
int f[305];
int p;
//0没选1挂2过  
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>k;
        a[i][0]=k;
        for(int j=1;j<=k;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=m;i++)
    {
        cin>>t;
        p=0;
        for(int j=1;j<=t;j++)
        {
            cin>>x[j];
        }
        for(int j=1;j<=t;j++)
        {
            cin>>s[j];
        }
        for(int j=1;j<=t;j++)
        {
            int flag=0;
            for(int o=1;o<=a[x[j]][0];o++)
            {
                if(f[a[x[j]][o]]!=2)
                {
                    flag=1;
                }
            }
            if(flag==0&&(f[x[j]]==1||f[x[j]]==0))
            {
                // if(s[j]>=60)
                // {
                //     f[x[j]]=2;
                //     cout<<"P";
                // }else if(s[j]<60)
                // {
                //     f[x[j]]=1;
                //     cout<<"F";
                // }
            }else{
                // cout<<"Error";
                p=1;
                break;
            }
        }
        if(p==1)
        {
            cout<<"Error";
        }else{
            for(int j=1;j<=t;j++)
        {
                if(s[j]>=60)
                {
                    f[x[j]]=2;
                    cout<<"P";
                }else if(s[j]<60)
                {
                    f[x[j]]=1;
                    cout<<"F";
                }
        }
            // if(s[j]>=60)
            //     {
            //         f[x[j]]=2;
            //         cout<<"P";
            //     }else if(s[j]<60)
            //     {
            //         f[x[j]]=1;
            //         cout<<"F";
            //     }
        }
        cout<<endl;
    }
    
    return 0;
}