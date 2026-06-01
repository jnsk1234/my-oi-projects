#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}


long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}


long long lcm3(long long a, long long b, long long c) {
    long long lcm_ab = lcm(a, b);
    return lcm(lcm_ab, c);
}

int main() {
    long long num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    long long result = lcm3(num1, num2, num3);

    cout << result ;

    return 0;
}


