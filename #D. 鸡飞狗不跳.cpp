#include<bits/stdc++.h>
using namespace std;
struct node {
	int x,dep;
};
queue<node> q;
int a[100005];
int n,m;
void bfs(int x,int dep) {
	a[x]=1;
	q.push({x,dep});
	while(!q.empty()) {
		node h=q.front();
		q.pop();
		if(h.x*2<=100000&&a[h.x*2]==0) {
			a[h.x*2]=1;
			q.push({h.x*2,h.dep+1});
			if(h.x*2==m) {
				cout<<h.dep+1;
				exit(0);
			}
		}
		if(h.x-1>=0&&a[h.x-1]==0) {
			a[h.x-1]=1;
			q.push({h.x-1,h.dep+1});
			if(h.x-1==m) {
				cout<<h.dep+1;
				exit(0);
			}
		}
		if(h.x+1<=100000&&a[h.x+1]==0) {
			a[h.x+1]=1;
			q.push({h.x+1,h.dep+1});
			if(h.x+1==m) {
				cout<<h.dep+1;
				exit(0);
			}
		}
	}
}
int main() {
	cin>>n>>m;
	if(n==m)
	{
		cout<<0;
		return 0;
	}
	bfs(n,0);
	return 0;
}

