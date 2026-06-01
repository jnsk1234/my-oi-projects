#include<bits/stdc++.h>
using namespace std;
int fun(int x)
{
	if(x==1)
	{
		return 1;
	}
	return fun(x-1)+3;
}
int main()
{
	int n;
	cin>>n;
	cout<<fun(n);
    return 0;
}

