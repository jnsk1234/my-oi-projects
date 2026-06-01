#include<bits/stdc++.h>
using namespace std;
_int128 a=1;
int n;
int c[15],x;
int main() {
	cin>>n>>x;
	for(int i=1; i<=n; i++) {
		a*=i;
	}
	while(a) {
		c[a%10]++;
		a/=10;
	}
	cout<<c[x];
	return 0;
}

