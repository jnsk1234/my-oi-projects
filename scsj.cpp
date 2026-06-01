#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <random>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <map>

using namespace std;

vector<pair<int, int>> generate_complete_tree(int n) {
    vector<pair<int, int>> edges;
    
    // 使用随机设备
    random_device rd;
    mt19937 gen(rd());
    
    for (int i = 2; i <= n; i++) {
        uniform_int_distribution<> dis(1, i - 1);
        int parent = dis(gen);
        edges.push_back({parent, i});
    }
    
    return edges;
}

vector<pair<int, int>> generate_partial_relations(int n, int m) {
    vector<pair<int, int>> edges;
    vector<pair<int, int>> possible_edges;
    
    // 生成所有可能的祖先关系
    for (int u = 1; u <= n; u++) {
        for (int v = u + 1; v <= n; v++) {
            possible_edges.push_back({u, v});
        }
    }
    
    // 随机打乱
    random_device rd;
    mt19937 gen(rd());
    shuffle(possible_edges.begin(), possible_edges.end(), gen);
    
    set<pair<int, int>> selected;
    map<int, set<int>> transitive_closure;
    
    for (auto [u, v] : possible_edges) {
        if (edges.size() >= m) break;
        
        // 检查是否会产生冲突
        if (transitive_closure[v].count(u)) {
            continue;
        }
        
        // 检查是否已经存在反向关系
        if (selected.count({v, u})) {
            continue;
        }
        
        edges.push_back({u, v});
        selected.insert({u, v});
        
        // 更新传递闭包
        // u的所有祖先也是v的祖先
        for (int ancestor : transitive_closure[u]) {
            transitive_closure[v].insert(ancestor);
        }
        transitive_closure[v].insert(u);
        
        // v的所有后代也是u的后代
        vector<int> nodes_to_update;
        for (auto& [node, ancestors] : transitive_closure) {
            if (ancestors.count(u)) {
                nodes_to_update.push_back(node);
            }
        }
        
        for (int node : nodes_to_update) {
            transitive_closure[node].insert(v);
        }
    }
    
    return edges;
}

vector<pair<int, int>> generate_chain_structure(int n, int m) {
    vector<pair<int, int>> edges;
    
    // 创建链
    for (int i = 1; i < n; i++) {
        edges.push_back({i, i + 1});
    }
    
    // 如果需要更多关系
    if (m > n - 1) {
        int additional = m - (n - 1);
        vector<pair<int, int>> possible_edges;
        
        for (int u = 1; u <= n; u++) {
            for (int v = u + 1; v <= n; v++) {
                bool exists = false;
                for (auto [x, y] : edges) {
                    if ((x == u && y == v) || (x == v && y == u)) {
                        exists = true;
                        break;
                    }
                }
                if (!exists) {
                    possible_edges.push_back({u, v});
                }
            }
        }
        
        random_device rd;
        mt19937 gen(rd());
        shuffle(possible_edges.begin(), possible_edges.end(), gen);
        
        set<pair<int, int>> selected(edges.begin(), edges.end());
        map<int, set<int>> transitive_closure;
        
        // 初始化传递闭包
        for (auto [u, v] : edges) {
            transitive_closure[v].insert(u);
        }
        
        for (auto [u, v] : possible_edges) {
            if (edges.size() >= m) break;
            
            // 检查是否会产生冲突
            if (transitive_closure[v].count(u)) {
                continue;
            }
            
            // 检查是否已经存在反向关系
            if (selected.count({v, u})) {
                continue;
            }
            
            edges.push_back({u, v});
            selected.insert({u, v});
        }
    }
    
    return edges;
}

vector<pair<int, int>> generate_star_structure(int n, int m) {
    vector<pair<int, int>> edges;
    
    // 创建星型结构
    for (int i = 2; i <= n; i++) {
        edges.push_back({1, i});
    }
    
    // 如果需要更多关系
    if (m > n - 1) {
        int additional = m - (n - 1);
        vector<pair<int, int>> possible_edges;
        
        for (int u = 1; u <= n; u++) {
            for (int v = u + 1; v <= n; v++) {
                bool exists = false;
                for (auto [x, y] : edges) {
                    if ((x == u && y == v) || (x == v && y == u)) {
                        exists = true;
                        break;
                    }
                }
                if (!exists) {
                    possible_edges.push_back({u, v});
                }
            }
        }
        
        random_device rd;
        mt19937 gen(rd());
        shuffle(possible_edges.begin(), possible_edges.end(), gen);
        
        set<pair<int, int>> selected(edges.begin(), edges.end());
        map<int, set<int>> transitive_closure;
        
        // 初始化传递闭包
        for (auto [u, v] : edges) {
            transitive_closure[v].insert(u);
        }
        
        for (auto [u, v] : possible_edges) {
            if (edges.size() >= m) break;
            
            // 检查是否会产生冲突
            if (transitive_closure[v].count(u)) {
                continue;
            }
            
            // 检查是否已经存在反向关系
            if (selected.count({v, u})) {
                continue;
            }
            
            edges.push_back({u, v});
            selected.insert({u, v});
        }
    }
    
    return edges;
}

vector<pair<int, int>> generate_random_test(int n, int m, int test_type) {
    switch(test_type) {
        case 1: // 完整树
            return generate_complete_tree(n);
        case 2: // 部分关系
            return generate_partial_relations(n, m);
        case 3: // 链状结构
            return generate_chain_structure(n, m);
        case 4: // 星型结构
            return generate_star_structure(n, m);
        default:
            return generate_partial_relations(n, m);
    }
}

int main() {
    // 设置随机种子
    srand(time(0));
    
    int n, m, test_type;
    
    // 从用户输入获取参数
    cout << "请输入 n（节点数）: ";
    cin >> n;
    
    cout << "请输入 m（关系数）: ";
    cin >> m;
    
    cout << "请选择测试类型：" << endl;
    cout << "1 = 完整树结构" << endl;
    cout << "2 = 部分关系" << endl;
    cout << "3 = 链状结构" << endl;
    cout << "4 = 星型结构" << endl;
    cout << "请输入类型编号（1-4）: ";
    cin >> test_type;
    
    // 验证输入
    if (n < 1) {
        cout << "错误：n 必须大于 0" << endl;
        return 1;
    }
    
    if (m < 0) {
        cout << "错误：m 不能为负数" << endl;
        return 1;
    }
    
    if (test_type < 1 || test_type > 4) {
        cout << "错误：测试类型必须是 1-4 之间的数字" << endl;
        return 1;
    }
    
    // 对于完整树类型，确保 m = n-1
    if (test_type == 1) {
        if (m != n - 1) {
            cout << "提示：完整树类型需要 m = n-1 = " << n-1 << endl;
            cout << "已自动调整 m 为 " << n-1 << endl;
            m = n - 1;
        }
    }
    
    // 检查 m 是否合理
    int max_edges = n * (n - 1) / 2;
    if (m > max_edges) {
        cout << "错误：m 太大，最大可能的边数为 " << max_edges << endl;
        return 1;
    }
    
    // 生成数据
    auto edges = generate_random_test(n, m, test_type);
    
    // 输出
    cout << "\n生成的数据：" << endl;
    cout << n << " " << edges.size() << endl;
    for (auto [u, v] : edges) {
        cout << u << " " << v << endl;
    }
    
    return 0;
}