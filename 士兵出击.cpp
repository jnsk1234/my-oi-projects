#include<bits/stdc++.h>
using namespace std;
struct A {
	int name;
	int cs;
} a[1010];
int jl[1010];
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <=n; i++) {
		cin >> jl[i];
	}
	for (int i = 1; i <=1000; i++) {
		a[i].name = -1;
		a[i].cs = 0;
	}
	for (int i = 1; i <=n; i++) {
		int id = jl[i];
		if (id == 0) continue;
		bool found = false;
		for (int j = 1; j <=1000; j++) {
			if (a[j].name == id) {
				a[j].cs++;
				found = true;
				break;
			}
		}
		if (!found) {
			for (int j = 1; j <=1000; j++) {
				if (a[j].name == -1) {
					a[j].name = id;
					a[j].cs = 1;
					break;
				}
			}
		}
	}
	for (int i = 1; i <=1000; i++) {
		if (a[i].name != -1 && a[i].cs >= 3) {
			cout<<-1;
			return 0;
		}
	}
		int _2 = 0;
		for (int i = 1; i <=1000; i++) {
			if (a[i].name != -1 && a[i].cs == 2) {
				_2++;
			}
		}
		cout << _2 << endl;
	return 0;
}
