#include<bits/stdc++.h>
using namespace std;
int n;
int p[55];
// int a[30];
int dis[55];
string s;
int mx=-1e9;
int a[55][30];
int ans;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        getline(cin,s);
        char c = tolower(s[0]);
        p[i] = c - 'a' + 1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=26;j++)
        {
            a[i][j] = i;
            for(int k=1;k<=n;k++)
            {
                int l=(i+k-1)%n+1;
                if(p[l]==j)
                {
                    a[i][j]=l;
                    break;
                }
            }
        }
    }
    for (int st = 1; st <=n; st++) {
        queue<int> q;
        memset(dis,-1,sizeof(dis));

        dis[st] = 0;
        q.push(st);

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            for (int oo=1;oo<=26;oo++) {
                int v=a[u][oo];
                if (dis[v] == -1) {
                    dis[v] = dis[u] + 1;
                    q.push(v);
                }
            }
        }

        for (int i = 1; i <= n; i++) {
            ans = max(ans, dis[i]);
        }
    }
    cout<<ans;
    return 0;
}