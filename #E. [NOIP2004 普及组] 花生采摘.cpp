#include<bits/stdc++.h>
using namespace std;
struct node {
	int x,y,sz;
};
node b[450];
int a[25][25];
int n,m,k,x;
int num=0;
int ans;
bool cmp(node A,node B) {
	return A.sz>B.sz;
}
int main() {
	cin>>n>>m>>k;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			cin>>x;
			a[i][j]=x;
			if(x!=0) {
				num++;
				b[num].x=i;
				b[num].y=j;
				b[num].sz=x;
			}
		}
	}
	if(num==0) {
		cout<<0;
		return 0;
	}
	sort(b+1,b+num+1,cmp);
	if(b[1].x*2+1>k) {
		cout<<0;
		return 0;
	}
	int o=b[1].x+1;
	ans=b[1].sz;
	for(int i=2; i<=num; i++) {
		o+=abs(b[i].x-b[i-1].x)+abs(b[i].y-b[i-1].y)+1;
		if(o+b[i].x>k) {
			break;
		} else {
			ans+=b[i].sz;
		}
	}
	cout<<ans;
	return 0;
}

