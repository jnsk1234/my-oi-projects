#include<bits/stdc++.h>
using namespace std;
int n,a[34],c[8],x,cnt;
int main()
{
	cin>>n;
	for(int i=1;i<=7;i++)
	{
		cin>>x;
		a[x]=1;
	}
	for(int i=1;i<=n;i++)
	{
		 cnt=0;
		 for(int j=1;j<=7;j++)
		 {
		 	cin>>x;
		 	if(a[x]==1)
		 	{
		 		cnt++;
			}	
		 }
		 c[cnt]++;
	}
	for(int i=7;i>=1;i--)
	{
		cout<<c[i]<<" "; 
	}
	
    return 0;
}

