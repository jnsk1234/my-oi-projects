#include<bits/stdc++.h>
using namespace std;
int t;
void qp()
{long long a,b;
    string sa,sb;
    cin>>a>>b;
    while(a!=0)
    {
        sa+=((a&1)+'0');
        a=(a>>1);
    }
    reverse(sa.begin(),sa.end());

    while(b!=0)
    {
        sb+=((b&1)+'0');
        b=(b>>1);
    }
    reverse(sb.begin(),sb.end());
    while(sb.size()>0&&sb.back()=='0') sb.pop_back();
    if(sa.find(sb)!=-1)
    {
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        qp();
    }
    return 0;
}