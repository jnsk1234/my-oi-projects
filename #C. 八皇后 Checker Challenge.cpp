#include<bits/stdc++.h>
using namespace std;
int zx[40];
int fx[40];
int l[40];
int ans[40];
int k;
int n;
void dfs(int x) {
	if(x>n) {
		k++;
		if(k<=3) {
			for(int i=1; i<=n; i++) {
				cout<<ans[i]<<" ";
			}
			cout<<endl;
			return ;
		}
		else if(k>3){
			return ;
		}
	}
	for(int i=1; i<=n; i++) {
		if(zx[x-i+n]==0&&fx[x+i]==0&&l[i]==0) {
			zx[x-i+n]=1;
			fx[x+i]=1;
			l[i]=1;
			ans[x]=i;
			dfs(x+1);
			ans[x]=0;
			zx[x-i+n]=0;
			fx[x+i]=0;
			l[i]=0;
		}
	}
}
int main() {
	cin>>n;
	dfs(1);
	cout<<k;
	return 0;
}

