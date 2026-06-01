#include <bits/stdc++.h>
using namespace std;
int a[1000];
int b[1000];
int c[1000];
int q;
int n;
void ans(int a[], int b[], int c[]) {
	int ch = 0;
	for (int i = 0; i < 1000; ++i) {
		int sum = a[i] + b[i] + ch;
		c[i] = sum % 10;
		ch = sum / 10;
	}
}
void x(int n) {
	a[0] = 1;
	b[0] = 1;
	for (int i = 3; i <= n; ++i) {
		ans(a, b, c);
		memcpy(a, b, sizeof(b));
		memcpy(b, c, sizeof(c));
		memset(c, 0, sizeof(c));
	}
}

int main() {
	cin >> n;
	if(n==1||n==2) {
		cout<<1;
		return 0;
	}
	x(n);
	for(int i=1000; i>=1; i--) {
		if(b[i]!=0) {
			q=i;
			break;
		}
	}
	for(int i=q; i>=0; i--) {
		cout<<b[i];
	}
	return 0;
}
