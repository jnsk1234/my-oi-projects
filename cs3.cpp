#include <bits/stdc++.h>
using namespace std;

int func(int a, int b)
{
    if(a == 0)
        return b;
    if(b == 0)
        return a;
    return a + func(b, a-b);
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << func(x, y) << endl;
    return 0;
}