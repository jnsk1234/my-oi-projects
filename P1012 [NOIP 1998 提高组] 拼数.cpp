#include<bits/stdc++.h>
using namespace std;
vector<string> a;
int n;
bool cmp(const string &a, const string &b) {
    return a+b>b+a;
}
int main(){
    cin>>n;
    a.resize(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end(),cmp);
    if (a[0] == "0") {
        cout << "0" << endl;
        return 0;
    }
    for (const string &an : a) {
        cout << an;
    }
    return 0;
}