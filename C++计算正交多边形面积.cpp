#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Point {
    int x, y;
};

// 计算多边形面积的函数
int calculateArea(vector<Point>& points) {
    int area = 0;
    int n = points.size();
    
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        // 使用鞋带公式
        area += (points[i].x * points[j].y) - (points[j].x * points[i].y);
    }
    
    return abs(area) / 2;
}

int main() {
    int n;
   // cout << "请输入顶点数量: ";
    cin >> n;
    
    vector<Point> points(n);
  //  cout << "请按逆时针顺序输入各顶点坐标(x y):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> points[i].x >> points[i].y;
    }
    
    int area = calculateArea(points);
    cout << area << endl;
    
    return 0;
}
