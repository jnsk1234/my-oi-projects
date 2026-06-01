#include <bits/stdc++.h>
using namespace std;
int t,n,k,cnt,x;
int main() {

	cin >> t;
	while (t--) {
		cin >> n >> k;
		vector<int> c;
		for (int i = 0; i < n; ++i) {
			cin >> x;
			c.push_back(x);
		}

		cnt = n;
		
		for (int i=1; i<=100; i++) {
			int j=0;
			x=0;
			while (j < n) {
				if (c[j] != i) {
					x++;
					j += k;
				} else {
					j++;
				}
			}
			cnt = min(cnt, x);
		}

		cout << cnt <<endl;
	}
	return 0;
}
