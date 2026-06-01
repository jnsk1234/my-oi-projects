#include<bits/stdc++.h>
using namespace std;

struct node {
    int l, r;
};

node a[1005];
string s1, s2;
int s3[1005];
int s4[1005];
int dep = 1;  // 用于追踪先序数组的下标

// 修正的dfs函数
void dfs(int root, int in_start, int in_end) {
    // 在中序中找到根节点的位置
    int root_pos = -1;
    for(int i = in_start; i <= in_end; i++) {
        if(s4[i] == root) {
            root_pos = i;
            break;
        }
    }
    
    if(root_pos == -1) return;
    
    // 计算左子树的大小
    int left_size = root_pos - in_start;
    
    // 构建左子树
    if(left_size > 0) {
        dep++;  // 移动到先序中的下一个节点
        a[root].l = s3[dep];
        dfs(a[root].l, in_start, root_pos - 1);
    }
    
    // 构建右子树
    int right_size = in_end - root_pos;
    if(right_size > 0) {
        dep++;  // 移动到先序中的下一个节点
        a[root].r = s3[dep];
        dfs(a[root].r, root_pos + 1, in_end);
    }
}

void dfs1(int x) {
    if(a[x].l != 0) {
        dfs1(a[x].l);
    }
    if(a[x].r != 0) {
        dfs1(a[x].r);
    }
    cout << char(x + 'a' - 1);
}

int main() {
    cin >> s1 >> s2;
    
    // 将字符转换为数字（从1开始）
    for(int i = 0; i < s1.size(); i++) {
        s3[i + 1] = s1[i] - 'a' + 1;
    }
    for(int i = 0; i < s2.size(); i++) {
        s4[i + 1] = s2[i] - 'a' + 1;
    }
    
    // 初始化根节点
    int root_val = s3[1];
    a[root_val].l = a[root_val].r = 0;
    
    // 构建树
    dfs(root_val, 1, s2.size());
    
    // 输出后序遍历
    dfs1(root_val);
    
    return 0;
}