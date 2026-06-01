#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    int m = n * (n - 1) / 2;
    vector<int> s(m);
    for (int i = 0; i < m; i++) {
        cin >> s[i];
    }
    sort(s.begin(), s.end());
    
    // 对于 n=3 的特殊情况
    if (n == 3) {
        long long s1 = s[0], s2 = s[1], s3 = s[2];
        // 使用 long long 避免溢出
        long long sum_all = s1 + s2 + s3;
        if (sum_all % 2 != 0) return 0;
        long long total = sum_all / 2;
        long long a1 = total - s3;
        long long a2 = total - s2;
        long long a3 = total - s1;
        
        // 验证顺序和和
        if (a1 > 0 && a1 < a2 && a2 < a3 && 
            a1 + a2 == s1 && a1 + a3 == s2 && a2 + a3 == s3) {
            cout << a1 << " " << a2 << " " << a3 << endl;
            return 0;
        }
    }
    
    // 对于 n>3 的情况
    long long s1 = s[0];
    // 枚举 a1，注意使用 long long
    for (long long a1 = 1; a1 * 2 < s1; a1++) {
        long long a2 = s1 - a1;
        if (a2 <= a1) continue;
        
        multiset<long long> sums(s.begin(), s.end());
        auto it = sums.find(s1);
        if (it == sums.end()) continue;
        sums.erase(it);
        
        vector<long long> ans = {a1, a2};
        bool valid = true;
        
        for (int idx = 2; idx < n; idx++) {
            if (sums.empty()) {
                valid = false;
                break;
            }
            
            long long min_sum = *sums.begin();
            long long a_next = min_sum - a1;
            
            if (a_next <= ans.back()) {
                valid = false;
                break;
            }
            
            // 先检查所有需要的和是否都存在
            for (int j = 0; j < ans.size(); j++) {
                long long needed = ans[j] + a_next;
                if (sums.find(needed) == sums.end()) {
                    valid = false;
                    break;
                }
            }
            if (!valid) break;
            
            // 然后删除所有需要的和
            for (int j = 0; j < ans.size(); j++) {
                long long needed = ans[j] + a_next;
                auto it_needed = sums.find(needed);
                sums.erase(it_needed);
            }
            
            ans.push_back(a_next);
        }
        
        if (valid && sums.empty()) {
            for (int i = 0; i < n; i++) {
                cout << ans[i] << (i == n-1 ? "\n" : " ");
            }
            return 0;
        }
    }
    
    return 0;
}