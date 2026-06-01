#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second != b.second) {
        return a.second > b.second; // 按得票数降序
    }
    return a.first < b.first; // 得票数相同则按编号升序
}

int main() {
    int n;
    cin >> n;
    vector<int> c(11, 0); 
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        if (num >= 1 && num <= 10) {
            c[num]++;
        }
    }
    vector<pair<int, int>> res;
    for (int i = 1; i <= 10; ++i) {
        res.emplace_back(i, c[i]);
    }
    sort(res.begin(), res.end(), cmp);
    
    for (const auto& p : res) {
        cout << p.second << " " << p.first << endl;
    }
    
    return 0;
}
