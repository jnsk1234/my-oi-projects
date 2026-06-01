#include<bits/stdc++.h>
using namespace std;
int n,ys,ans;
int a[100005];
int b[100005];
int d;
int main() {
	cin>>n>>d;
	a[1]=0;
	for(int i=2; i<=n-1; i++) {
		cin>>f;
		a[i]=f+a[i-1];
	}
	for(int i=1; i<=n; i++) {
		cin>>b[i];
	}
	int x=1;
	int mi=b[1];
	for(int i=2;i<=n;i++)
	{
		mi=min(b[i],mi);
		ans+=ceil(a[i]/d*mi);
		a[i]+=d;
	}
	cout<<ans;
	return 0;
}

