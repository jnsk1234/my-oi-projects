#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>s;
        string ans;
        ans += toupper(s[0]);
        for(int i = 0; i < s.size() - 1; i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                ans += toupper(s[i+1]);
            }
        }
        cout<<ans<<endl;
    }
    
    
    return 0;
}