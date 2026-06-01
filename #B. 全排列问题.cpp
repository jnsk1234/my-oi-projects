#include<bits/stdc++.h>
using namespace std;
int n;
int a[5005];
int ans;
void dfs(int x,int y,int yu,int ma,int sum) {
	if(x==y) {
		if(sum>ma*2)
		{
			ans++;
		}
		return;
	}
	for(int i=yu+1; i<=n; i++) {
		dfs(x,y+1,i,max(ma,a[i]),sum+a[i]);
	}
}
int main() {
	cin>>n;
	// if(n<=20)
	// {
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=3;i<=n;i++)
	{
		dfs(i,0,0,0,0);
	}
	cout<<ans;
	// //}else{
	// 	cout<<0;
	// }
	return 0;
}
