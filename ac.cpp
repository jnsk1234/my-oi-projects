#include<bits/stdc++.h>
using namespace std;
int s1,s2,a,n;
int f(int a, int n) {
	queue<int> a1,a2;
	a1.push(a);
	a2.push(a);
	int res = 0;
	for (int i = 1; i <= n; i++) {
		if (a1.front() > a2.front()) {
			res = a2.front();
			a2.pop();
		} else if (a1.front() < a2.front()) {
			res = a1.front();
			a1.pop();
		} else {
			res = a1.front();
			a1.pop();
			a2.pop();
		}
		s1 = 2 * res + 1;
		a1.push(s1);
		s2  = 3 * res + 1;
		a2.push(s2);
	}
	return res;
}
int main() {
	while (cin >> a >> n) {
		cout << f(a, n) << endl;
	}
	return 0;
}

