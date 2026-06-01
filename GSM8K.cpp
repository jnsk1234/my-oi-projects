#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int n;
int ans;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s1>>s2;
        auto a1=s1.rfind("####");
        string a2=s1.substr(a1+4);
        int ans1=stoll(a2);
        auto a3=s2.rfind("\\boxed{");
        auto a4 = s2.find("}", a3);
        string a5=s2.substr(a3+7,a3-(a4+7));
        int ans2=stoll(a5);
        if(ans1==ans2)
        {
            ans++;
        }
    }
    cout<<ans;
    
    return 0;
}