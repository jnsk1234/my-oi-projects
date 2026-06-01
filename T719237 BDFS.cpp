#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v, w;
    bool operator<(const Edge& other) const {
        return w < other.w;
    }
};

class DSU {
public:
    vector<int> parent, rank;
    DSU(int n) {
        parent.resize(n + 1);
        rank.resize(n + 1, 0);
        for (int i = 1; i <= n; i++) parent[i] = i;
    }
    
    int find(int x) {
        if (parent[x] != x) parent[x] = find(parent[x]);
        return parent[x];
    }
    
    bool unite(int a, int b) {
        int ra = find(a), rb = find(b);
        if (ra == rb) return false;
        if (rank[ra] < rank[rb]) parent[ra] = rb;
        else if (rank[ra] > rank[rb]) parent[rb] = ra;
        else {
            parent[rb] = ra;
            rank[ra]++;
        }
        return true;
    }
};

bool isMSTUnique(int n, vector<Edge>& edges) {
    sort(edges.begin(), edges.end());
    
    DSU dsu(n);
    int total = 0;
    vector<Edge> mstEdges;
    
    // 先用 Kruskal 求 MST
    for (const Edge& e : edges) {
        if (dsu.unite(e.u, e.v)) {
            total += e.w;
            mstEdges.push_back(e);
        }
        if (mstEdges.size() == n - 1) break;
    }
    
    // 检查是否有另一棵权值相同的 MST
    for (size_t i = 0; i < mstEdges.size(); i++) {
        DSU tempDSU(n);
        int tempTotal = 0;
        int cnt = 0;
        
        // 跳过第 i 条 MST 边，用其他边构建
        for (const Edge& e : edges) {
            if (e.u == mstEdges[i].u && e.v == mstEdges[i].v && e.w == mstEdges[i].w) {
                continue; // 跳过要替换的边
            }
            if (tempDSU.unite(e.u, e.v)) {
                tempTotal += e.w;
                cnt++;
                if (cnt == n - 1) break;
            }
        }
        
        // 如果也能连通所有点且权值和相等，说明 MST 不唯一
        if (cnt == n - 1 && tempTotal == total) {
            return false;
        }
    }
    
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int n, m;
        cin >> n >> m;
        
        vector<Edge> edges(m);
        for (int i = 0; i < m; i++) {
            cin >> edges[i].u >> edges[i].v >> edges[i].w;
        }
        
        if (isMSTUnique(n, edges)) {
            cout << "BFS\n";
        } else {
            cout << "DFS\n";
        }
    }
    
    return 0;
}