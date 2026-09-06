#include <bits/stdc++.h>
using namespace std;
const long long base = 131, mod = 1000000000000000003;
vector<string> a;
string s;
map<long long, long long> b;
long long powp[3005];
int szl[3005];
int szh[3005];

long long n, cnt, q;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    powp[0] = 1;
    for (long long i = 1; i <= 3000; i++)
    {
        powp[i] = (powp[i - 1] * base) % mod;
    }
    for (long long id = 0; id <= 2000; id++)
    {
        string tag = "@" + to_string(id);
        szl[id] = tag.size();
        long long h = 0;
        for (char c : tag)
        {
            h = (1LL * h * base + c) % mod;
        }
        szh[id] = h;
    }
    for (long long i = 1; i <= n; i++)
    {
        cin >> s;
        a.push_back(s);
    }
    for (long long i = 0; i < n; i++)
    {
        map<string, long long> aaa;
        cnt = 0;
        long long h = 0;
        int first=1;
        for (long long j = i; j < n; j++) 
        {
            long long ah = 0, al = 0;
            if (!first) {
                h = (1LL * h * powp[1] + 32) % mod;
            }
            first = false;
            if (a[j].size() == 1 && isalpha(a[j][0]))
            {
                if (aaa.count(a[j]) != 1)
                {
                    aaa[a[j]] = cnt++;
                }
                ah = szh[aaa[a[j]]];
                al = szl[aaa[a[j]]];
            }
            else
            {
                long long hh = 0;
                for (char c : a[j])
                {
                    hh = (1LL * hh * base + c) % mod;
                }
                ah = hh;
                al = a[j].size();
            }
            h = (1LL * h * powp[al] + ah) % mod;
            b[h]++;
        }
    }
    cin >> q;
    for (long long i = 1; i <= q; i++)
    {
        long long m;
        cin >> m;
        long long h = 0;
        map<string, long long> aaa;
        cnt = 0;
        int first=1;
        for (long long j = 1; j <= m; j++)  
        {
            cin >> s;
            if (!first) {
                h = (1LL * h * powp[1] + 32) % mod;
            }
            first = false;
            long long ah = 0, al = 0;
            if (s.size() == 1 && isalpha(s[0]))
            {
                if (aaa.count(s) != 1)
                {
                    aaa[s] = cnt++;
                }
                ah = szh[aaa[s]];
                al = szl[aaa[s]];
            }
            else
            {
                long long hh = 0;
                for (char c : s)
                {
                    hh = (1LL * hh * base + c) % mod;
                }
                ah = hh;
                al = s.size();
            }
            h = (1LL * h * powp[al] + ah) % mod;
        }
        if (b.count(h))
        {
            cout << "yes" << "\n";
        }
        else
        {
            cout << "no" << "\n";
        }
    }
    return 0;
}