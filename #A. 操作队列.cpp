#include<bits/stdc++.h>
using namespace std;
queue<int> a;
int n;
int x,q;
int main() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>x;
		if(x==1) {
			cin>>q;
			a.push(q);
		} else if(x==2) {
			if(a.size()!=0) {
				cout<<a.front()<<endl;
				a.pop();
			} else {
				cout<<"empty"<<endl;
			}
		}
	}

	return 0;
}

