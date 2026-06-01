#include<bits/stdc++.h>
using namespace std;
long long ans;
long long a;
int js;
void fun(int x)
{
	if(js==a-1)
	{
		return;
	}
	ans+=(x*10+a);
	js++;
	return fun(x*10+a);

}
int main()
{
	cin>>a;
	fun(a);
	ans+=a;
	cout<<ans;
    return 0;
}

