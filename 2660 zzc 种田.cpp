#include<bits/stdc++.h>
using namespace std;
long long a,b,c,d,e;
int main()
{
	cin>>a>>b;
	c=__gcd(a,b);
	d=c*4;
	e=(a/c)*(b/c)*d;
	cout<<e;
    return 0;
}

