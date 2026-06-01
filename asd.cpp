#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int n = s.size();
    
    for (int L = n - 1; L >= 1; --L) {
        for (int i = 0; i <= n - L; ++i) {
            string substr = s.substr(i, L);
            if (s.find(substr, i + 1) != string::npos) {
                cout << L << endl;
                return 0;
            }
        }
    }
    
    cout << 0 << endl;
    return 0;
}
