#include<bits/stdc++.h>
using namespace std;

const int MAX_N = 1000005;

int main() {
    int n;
    cin >> n;
    int h[MAX_N]; // 高度数组，索引1~n
    for (int i = 1; i <= n; ++i) {
        cin >> h[i];
    }
    
    int lh[MAX_N];  // 左边第一个比它高的机器人索引
    int rh[MAX_N]; // 右边第一个比它高的机器人索引
    int c[MAX_N];        // 每个机器人接收的信号数量
    
    // 初始化
    memset(lh, -1, sizeof(lh));
    memset(rh, -1, sizeof(rh));
    memset(c, 0, sizeof(c));
    
    // 找左边第一个比它高的
    for (int i = 2; i <= n; ++i) {
        int j = i - 1;
        while (j >= 1 && h[j] < h[i]) {
            j = lh[j];  // 利用之前计算的结果跳转
        }
        lh[i] = j;
    }
    
    // 找右边第一个比它高的
    for (int i = n - 1; i >= 1; --i) {
        int j = i + 1;
        while (j <= n && h[j] < h[i]) {
            j = rh[j];  // 利用之前计算的结果跳转
        }
        rh[i] = j;
    }
    
    // 统计每个机器人接收的信号数量
    for (int i = 1; i <= n; ++i) {
        if (lh[i] != -1) {
            c[lh[i]]++;
        }
        if (rh[i] != -1 && rh[i] <= n) {
            c[rh[i]]++;
        }
    }
    
    // 找出接收信号最多的机器人
    int mx = -1;
    int id = 1;
    for (int i = 1; i <= n; ++i) {
        if (c[i] > mx) {
            mx = c[i];
            id = i;
        }
    }
    
    cout << id << " " << mx<< endl;
    return 0;
}
