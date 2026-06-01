#include<bits/stdc++.h>
using namespace std;
long long fun(int x)
{
	if(x==1)
	{
		return 1;
	}
	if(x==2)
	{
		return 1;
	}
	return fun(x-1)+fun(x-2);
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		cout<<fun(n)<<endl;
	}
    return 0;
}

