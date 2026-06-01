#include<bits/stdc++.h>
using namespace std;
string s1;
string S;
int n;
int z(const string& S, const string& s1) {
    int count = 0;
    int pos = 0;
    while ((pos = S.find(s1, pos)) != string::npos) {
        count++;
        pos++; 
    }
    return count;
}
int main() {
    cin >> S;
    cin >> n;
    for (int i = 1; i <=n; i++) {
        cin>>s1;
         cout << z(S, s1) << "\n";
    }
    return 0;
}