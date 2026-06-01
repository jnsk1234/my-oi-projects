#include<bits/stdc++.h>
using namespace std;
int n,r;
int a[10];
bool f[15];
void dfs(int x,int d)
{
	a[d]=x;
	if(d==r)
	{
		for(int i=1;i<=r;i++)
		{
			cout<<a[i]<<' ';
		}
		cout<<endl;
		return;
	 } 
	 for(int i=1;i<=n;i++)
	 {
	 	if(f[i]!=1)
	 	{
	 		f[i]=1;
	 		dfs(i,d+1);
	 //		f[i]=0;
		 }
	 }
}
int main()
{
	cin>>n>>r;
	dfs(0,0);

    return 0;
}

