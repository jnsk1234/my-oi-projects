#include<bits/stdc++.h>
using namespace std;
long long fun(long long x)
{
	if(x==1)
	{
		return 1;
	}
	return fun(x-1)*2;
}
int main()
{
	long long n;
	cin>>n;
	cout<<fun(n); 
    return 0;
}

