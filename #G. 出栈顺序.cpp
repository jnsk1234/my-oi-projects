#include<bits/stdc++.h>
using namespace std;
stack <int>a;
int x;
int n,len=1,m[1005],s[1005];
int T;
int main() {
	cin>>T;
	while(T--) {
		memset(m,0,sizeof(m));
		while(a.size()!=0){
			a.pop();
		}
		len=1;
		cin>>n;
		for(int i=1; i<=n; i++) {
			cin>>s[i];
		}
		for(int i=1; i<=n; i++) {
			cin>>m[i];
		}
		for(int i=1; i<=n; i++) {
			a.push(s[i]);
			while(!a.empty()&&m[len]==a.top()) {
				len++;
				a.pop();
			}
		}
		if(len>n) {
			cout<<"Yes"<<endl;
		} else {
			cout<<"No"<<endl;
		}
	}
	return 0;
}

