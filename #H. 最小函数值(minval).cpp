#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[10005],b[10005],c[10005];
int cnt;
priority_queue<int> f;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            int o=a[i]*j*j+b[i]*j+c[i];
            if(f.size()>=m)
            {
                if(o<f.top()) {
                    f.pop();
                    f.push(o);
                }
            }
            else{
                f.push(o);
            }
            
        }
    }
    vector<int> ui;
    while(!f.empty()) {
        ui.push_back(f.top());
        f.pop();
    }
    for(int i=m-1;i>=0;i--) {
        cout << ui[i]<<' ';
    }
    
    return 0;
}