#include<bits/stdc++.h>
using namespace std;
vector<string> a;
string s;
int n;
int main()
{
    a.push_back(" ");
    while(cin>>s)
    {
        n++;
        a.push_back(s);
    }
    sort(a.begin(),a.end());
    cout<<n;
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<endl;
    }
    
    return 0;
}