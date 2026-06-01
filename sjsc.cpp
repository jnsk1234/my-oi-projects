#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <queue>
#include <cassert>
#include <chrono>
using namespace std;

// 生成一棵以1为根的随机树，返回父节点数组（parent[1]=0）
vector<int> generate_tree(int n, mt19937 &rng) {
    vector<int> parent(n + 1, 0);
    for (int i = 2; i <= n; ++i) {
        uniform_int_distribution<int> dist(1, i - 1);
        parent[i] = dist(rng); // 父节点编号小于自身
    }
    return parent;
}

// 从树中获取所有祖先关系对 (u, v) 且 u 是 v 的祖先（u != v）
vector<pair<int, int>> get_all_ancestor_pairs(const vector<int> &parent, int n) {
    vector<pair<int, int>> pairs;
    for (int v = 1; v <= n; ++v) {
        int u = parent[v];
        while (u != 0) {
            pairs.emplace_back(u, v);
            u = parent[u];
        }
    }
    return pairs;
}

// 计算最小可能深度 L
int compute_L(int n, const vector<pair<int, int>> &edges) {
    // 构建邻接表，并添加从1到所有其他节点的隐含边
    vector<vector<int>> adj(n + 1);
    vector<int> indeg(n + 1, 0);

    // 添加已知边
    for (auto &e : edges) {
        int u = e.first, v = e.second;
        adj[u].push_back(v);
        indeg[v]++;
    }

    // 添加隐含边 1 -> i (i>1) 如果尚未存在
    for (int i = 2; i <= n; ++i) {
        bool exist = false;
        for (int v : adj[1]) {
            if (v == i) {
                exist = true;
                break;
            }
        }
        if (!exist) {
            adj[1].push_back(i);
            indeg[i]++;
        }
    }

    // 拓扑排序求最长路
    queue<int> q;
    vector<int> dist(n + 1, 1); // 所有节点初始深度为1

    // 入度为0的点入队
    for (int i = 1; i <= n; ++i) {
        if (indeg[i] == 0) {
            q.push(i);
        }
    }

    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : adj[u]) {
            if (dist[u] + 1 > dist[v]) {
                dist[v] = dist[u] + 1;
            }
            if (--indeg[v] == 0) {
                q.push(v);
            }
        }
    }

    // 取最大深度作为 L
    int L = 1;
    for (int i = 1; i <= n; ++i) {
        if (dist[i] > L) L = dist[i];
    }
    return L;
}

int main() {
    // 随机数生成器
    auto seed = chrono::system_clock::now().time_since_epoch().count();
    mt19937 rng(seed);

    int n, m;
    cout << "请输入 n 和 m: ";
    cin >> n >> m;

    if (n <= 0) {
        cerr << "n 必须为正整数" << endl;
        return 1;
    }

    // 生成随机树
    vector<int> parent = generate_tree(n, rng);

    // 获取所有祖先关系对
    auto all_pairs = get_all_ancestor_pairs(parent, n);
    int total = all_pairs.size();

    if (m > total) {
        cerr << "错误：m=" << m << " 超过可能的关系总数 " << total << "，请减小 m 或重新运行。" << endl;
        return 1;
    }

    // 随机选取 m 个不同的关系（使用洗牌取前 m）
    shuffle(all_pairs.begin(), all_pairs.end(), rng);
    vector<pair<int, int>> selected(all_pairs.begin(), all_pairs.begin() + m);

    // 输出生成的输入
    cout << "\n生成的输入：" << endl;
    cout << n << " " << m << endl;
    for (auto &e : selected) {
        cout << e.first << " " << e.second << endl;
    }

    // 计算答案 L
    int L = compute_L(n, selected);

    // 构造输出字符串
    string ans(n, '0');
    for (int d = L; d <= n; ++d) {
        ans[d - 1] = '1'; // 下标从 1 开始
    }

    cout << "\n对应的答案：" << endl;
    cout << ans << endl;

    return 0;
}