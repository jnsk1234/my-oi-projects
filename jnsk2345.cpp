#include<bits/stdc++.h>
using namespace std;
int cnt,num;
set<int> a;
vector<int> b;
int n, x,y;
int main() {
    cin >> n;
    for (int i = 1; i<=n;i++) {
        cin >>x;
		b.push_back(x);
    }
    cin >> y;
    int count = 0;
    for (int i : b) {
        int s = y - i;
        if (a.find(s) != a.end()) {
            cnt++;
        }
        a.insert(i);
    }
    cout << cnt << endl;
    return 0;
}
