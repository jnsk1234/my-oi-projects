#include<bits/stdc++.h>
using namespace std;
vector <int> a;
int n,m,k;
int main() {
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		a.push_back(i);
	}
	while(!a.empty()) {
		k=(k+m)%a.size();
		//cout<<a[k]<<' ';
		if(a[k]-1==0) {
			cout<<a.back()<<' ';
		} else{
			cout<<a[k]-1<<' ';
		}
	a.erase(a.begin()+k);
	k--;
	}
	return 0; 
}

