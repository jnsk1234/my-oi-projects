#include<bits/stdc++.h>
using namespace std;
long long fun(int x)
{
	if(x==1)
	{
		return 1;
	}
	return fun(x-1)*2+1;
}
int n;
int main()
{
	cin>>n;
	cout<<fun(n);
    return 0;
}

