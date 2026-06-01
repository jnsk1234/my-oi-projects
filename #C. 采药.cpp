#include<bits/stdc++.h>
using namespace std;
int T,m;
queue<int> q;
int sumt,sumv;
int mx=-1;
int t[100005];
int v[100005];
int main() {
	cin>>T>>m;
	for(int i=1; i<=m; i++) {
		cin>>t[i]>>v[i];
	}
	for(int i=1; i<=m;) {
		while(i<=m&&sumt+t[i]<=T) {
			sumt+=t[i];
			sumv+=v[i];
			q.push(i);
			mx=max(mx,sumv);
			i++;
		}
		sumt-=t[q.front()];
		sumv-=v[q.front()];
		q.pop();
	}
	cout<<mx;
	return 0;
}

