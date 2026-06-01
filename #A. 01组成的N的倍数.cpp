#include<bits/stdc++.h>
using namespace std;
long long n;
struct node {
	string s;
	long long n;
};
queue <node> q;
bool vis[1000000];
void bfs(long long x) {
	q.push({to_string(x),x%n});
	while(!q.empty()) {
		node h=q.front();
		q.pop();
		string nx=h.s+'0';
		string ny=h.s+'1';
		long long yx=(h.n*10)%n;
		if(yx==0) {
			cout<<nx;
			exit(0);
		}
		if(vis[yx]==0) {
			vis[yx]=1;
			q.push({nx,yx});
		}
		long long yy=(h.n*10+1)%n;
		if(yy==0) {
			cout<<ny;
			exit(0);
		}
		if(vis[yy]==0) {
			vis[yy]=1;
			q.push({ny,yy});
		}
	}
}
int main() {
	cin>>n;
	bfs(1);
	return 0;
}

