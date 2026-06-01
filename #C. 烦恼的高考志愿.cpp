#include<bits/stdc++.h>
using namespace std;
int m,a[100005],n;
int ans;
int main()
{
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+m+1);
    for(int i=1;i<=n;i++)
    {
        int c;
        cin>>c;
        if(c<=a[1])
        {
            ans+=a[1]-c;
        }
        else if(c>=a[m])
        {
            ans+=c-a[m];
        }else{
            int l=1,r=m,mid=(l+r)/2;
            while(l<=r)
            {
                mid=(l+r)/2;
                if(a[mid]>=c)
                {
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            if(abs(c-a[l])>abs(a[l-1]-c))
            {
                ans+=abs(a[l-1]-c);
            }else{
                ans+=abs(c-a[l]); 
            }
        }
    }
    cout<<ans;
    return 0;
}