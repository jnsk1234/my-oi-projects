#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> v, l, r, post;

bool c(int i, long long mn, long long mx) {
    if (!i) return true;
    if (v[i-1] <= mn || v[i-1] >= mx) return false;
    return c(l[i-1], mn, v[i-1]) && c(r[i-1], v[i-1], mx);
}

void dfs(int i) {
    if (!i) return;
    dfs(l[i-1]);
    dfs(r[i-1]);
    post.push_back(v[i-1]);
}

int main() {
    int n; 
    cin >> n;
    v.resize(n); l.resize(n); r.resize(n);
    for (int i=0; i<n; i++) cin >> v[i];
    for (int i=0; i<n; i++) {
        int x, y, z; cin >> x >> y >> z;
        l[x-1] = y; r[x-1] = z;
    }
    if (c(1,0, 1e9)) {
        dfs(1);
        for (int i=0; i<n; i++) {
            if (i > 0) cout << " ";
            cout << post[i];
        }
        cout << endl;
    } else cout << "No\n";
}