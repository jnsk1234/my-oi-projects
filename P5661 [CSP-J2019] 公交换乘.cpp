#include <iostream>
using namespace std;
struct Ticket {
    int price, time, used;
} q[100005];
int head, tail, n, cost;
int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
    	int op, price, time;
        cin >> op >> price >> time;
        if (op == 0) {
            cost += price;
            q[tail].time = time + 45;
            q[tail++].price = price;
        } else {
            while (head < tail && q[head].time < time) {
                head++;
            }
            bool found = 0; 
            for (int j = head; j < tail; ++j) {
                if (q[j].price >= price && q[j].used == 0) {
                    found = true;
                    q[j].used = 1;
                    break;
                }
            }
            if (!found) cost += price;
        }
    }
    cout << cost << endl;
    return 0;
}
