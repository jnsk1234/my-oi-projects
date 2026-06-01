#include<bits/stdc++.h>
using namespace std;

// 输入输出优化
void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

// 类型定义
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

// 常量定义
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int MOD = 1e9 + 7;

string s;
int a[15];
int main() {
    fastIO();
    cin>>s;
    for(int i=0;i<=s.size();i++)
    {
        if((s[i]-'0')>=0&&(s[i]-'0')<=9)
        {
            a[s[i]-'0']++;
        }
    }
    for(int i=9;i>=0;i--)
    {
        for(int j=1;j<=a[i];j++)
        {
            cout<<i;
        }
    }
    return 0;
}