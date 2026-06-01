#include<bits/stdc++.h>
using namespace std;
int a[15];
bool f[15];
int t;
int n;
int k;
int zs[]= {2,3,5,7,11,13,17,19};
void dfs(int x,int d) {
	a[d]=x;
	if(d==n) {
		for(int i=1; i<=d; i++) {
			if(i==d) {
				bool flag=0;
				int no=a[i]+a[1];
				for(int i=0; i<8; i++) {
					if(no==zs[i]) {
						flag=1;
						break;
					}
				}
				if(flag==0)
				{
					return; 
				}
			} else {
				bool flag=0;
				int no=a[i]+a[i+1];
				for(int i=0; i<8; i++) {
					if(no==zs[i]) {
						flag=1;
						break;
					}
				}
				if(flag==0)
				{
					return;
				}
			}
		}
		t++;
		cout<<t<<':';
		for(int i=1; i<=d; i++) {
			cout<<a[i]<<' ';
		}
		cout<<endl;
		return;
	}
	for(int i=1; i<=n; i++) {
		if(f[i]!=1) {
			f[i]=1;
			dfs(i,d+1);
			f[i]=0;
		}
	}
}
int main() {
	cin>>n;
	dfs(0,0);
	cout<<"total:"<<t;
	return 0;
}

