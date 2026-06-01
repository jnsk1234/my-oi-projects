#include<bits/stdc++.h>
using namespace std;
long long ans;
long long fun(int x)
{
	if(x<2)
	{
		return 0; 
	}
	if(x>=2)
	{
		ans+=x/2;
		return fun((x/2)+(x%2));
	}
}
int main()
{
	long long n,m;
	cin>>n>>m;
	ans+=m/n;
	fun(m/n);
	cout<<ans;
    return 0;
}

