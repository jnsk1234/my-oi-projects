#include<bits/stdc++.h>
using namespace std;
set<string> a;
string s;
int n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        a.insert(s);
    }
    cout<<52-a.size();
    
    return 0;
}