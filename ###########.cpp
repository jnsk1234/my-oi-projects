#include <iostream> 

using namespace std;
long long n;
long long cnt = 0; 
long long q[1000000];
int main() {

    cin >> n;
    int f = 0, r = 0; 

    q[r++] = 1; 

    while (f < r) { 
        long long c = q[f++]; 
        if (c > n) { 
            continue;
        }
        cnt++; 
        q[r++] = c * 10;
        q[r++] = c * 10 + 1; 
    }

    cout << cnt << endl;
    return 0;
}
