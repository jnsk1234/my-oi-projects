#include <bits/stdc++.h>
using namespace std;
long long ans[1005];
int n;
int main() {
	cin>>n;
	ans[1]=1;
	ans[2]=2;
	for(int i=3;i<=n+1;i++)
	{
		ans[i]=ans[i-1]*2+ans[i-2];
	}
	cout<<ans[n];
	return 0;
}
