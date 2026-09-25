#include<bits/stdc++.h>
using namespace std;
int ans;
int n;
string s;
int cnt;
int main()
{
    while(getline(cin, s))
    {
        // cout<<s<<' ';
        if(s=="")
        {
            break;
        }
        if(s[0]=='+')
        {
            cnt++;
        }
        else if(s[0]=='-')
        {
            cnt--;
        }
        else{
            int cnt2=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]==':')
                {
                    break;
                }
                cnt2++;
            }
            // cout<<s.size()-cnt2-1<<"!\n";
            ans+=((s.size()-cnt2-1)*cnt);
        }
        // cout<<"cnt"<<" "<<cnt<<' '<<"ans"<<' '<<ans<<"\n";
    }
    cout<<ans;
    
    return 0;
}