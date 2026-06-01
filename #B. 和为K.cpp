#include<bits/stdc++.h>
using namespace std;
int s[35];
int k;
int n;
int ans=0;
int a[35];
void dfs(int x,int sum) {
	if(sum==k) {
		ans++;
		return ;
	}
	if(sum>k)
	{
		return;
	}
	if(x>n)
	{
		return;
	}
	if(sum+(s[n]-s[x-1])<k)
	{
		return ;
	}
	dfs(x+1,sum+a[x]);
	dfs(x+1,sum);
}
int main() {
	cin>>n>>k;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	sort(a+1,a+n+1,greater<int>());
	for(int i=1; i<=n; i++) {
		s[i]=s[i-1]+a[i];
	}
	dfs(1,0);
	cout<<ans;
	return 0;
}

