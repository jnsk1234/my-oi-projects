#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
long long b;
long long d(long long x)
{
    long long l=s.size();
     while (l < x) {
        l *= 2;
    }
    long long ans=0;
    if(x<=s.size())
    {
        return x;
    }
    if(x!=l/2+1)
    {
        ans=d(x-((l/2)+1));
    }else{
        ans=d(l/2);
    }
    return ans;
}
int main() 
{
    cin>>s>>n;
    cout<<s[d(n)-1];
    
    
    return 0;
}
// COWWCOOCOWWC
// COWWCOOCOWWCCCOWWCOOCOWW
// COWWCOOCOWWCCCOWWCOOCOWWWCOWWCOOCOWWCCCOWWCOOCOW