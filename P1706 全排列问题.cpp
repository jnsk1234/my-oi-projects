#include<bits/stdc++.h>
using namespace std;
void fun(int x)
{
	if(x==1)
	{
		return;
	}
	cout<<setw(5)<<x-1;
	return fun(x-1);
}
int main()
{
	int n;
	cin>>n;
	fun(n);
    return 0;
}
//setw()
