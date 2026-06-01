#include<bits/stdc++.h>
using namespace std;
string s;
int n;
int main()
{
    cin>>n>>s;
    for(int i=1;i<=n-s.size();i++)
    {
        cout<<"o";
    }
    cout<<s;
    return 0;
}