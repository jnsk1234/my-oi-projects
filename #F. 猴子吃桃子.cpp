#include<bits/stdc++.h>
using namespace std;
long long fun(int x)
{
	if(x==10)
	{
		return 1;
	}
	return (fun(x+1)+1)*2;
}
int main()
{
	cout<<fun(1);
    return 0;
}

