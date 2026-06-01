#include<bits/stdc++.h>
using namespace std;
string s;
int main() {

    cin>>s;
    int n = s.size();
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 0; j <= n - i; j++) {
            string x = s.substr(j, i);
            if (s.find(x, j + 1) != -1) {
                cout << i << endl;
                return 0;
            }
        }
    }
    
    cout << 0 << endl;
    return 0;
}
