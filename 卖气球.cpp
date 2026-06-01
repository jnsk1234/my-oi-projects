#include<bits/stdc++.h>
using namespace std;
int m,n,x1,x2,a[1005],ans;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>x1>>x2;
		a[x1]+=x2;
	}
	for(int i=1;i<=1005;i++)
	{
		if(m==0)
		{
			break;
		 } 
		if(a[i]!=0)
		{
			if(a[i]<=m)
			{
				m-=a[i];
				ans+=i*a[i];
			}else{
				ans+=i*m;
				m=0;
			}
		}
	}
	cout<<ans;
    return 0;
}

