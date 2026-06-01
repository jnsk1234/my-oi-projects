#include<bits/stdc++.h>
using namespace std;
bool f[15];
int a[15];
int b[15];
int n;
int r[15];
int k;
void dfs(int x) {
	if(x>k) {
		for(int i=1; i<=n; i++) {
			cout<<r[i]<<' ';
		}
		cout<<endl;
		exit(0);
	}
	for(int i=1; i<=n; i++) {
		if(a[i]-b[x]>=0&&f[i]==0) {
			f[i]=1;
            r[x]=i;
			dfs(x+1);
			f[i]=0;
		}
	}
}
int main() {
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=k;i++)
    {
        cin>>b[i];
    }
	dfs(1);
    cout<<-1;
	return 0;
}