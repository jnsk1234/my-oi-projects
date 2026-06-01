#include <iostream>
using namespace std;

unsigned long long fibonacci(int n) {
    if (n <= 0) return 0;
    else if (n == 1 || n == 2) return 1;

    unsigned long long a = 1, b = 1;
    unsigned long long c;

    for (int i = 3; i <= n; ++i) {
        c = a + b; 
        a = b;     
        b = c;     
    }

    return b; 
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;

    return 0;
}

