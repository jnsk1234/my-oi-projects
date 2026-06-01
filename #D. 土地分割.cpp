#include<bits/stdc++.h>
using namespace std;
long long fun(long long a,long long b)
{
	if(a%b==0)
	{
		return b;
	}
	return fun(b,a%b);
}
int main()
{
	long long n,m;
	cin>>n>>m;
	cout<<fun(n,m);
    return 0;
}

