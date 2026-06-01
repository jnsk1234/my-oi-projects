#include<bits/stdc++.h>
using namespace std;
void fun(long long x)
{
	if(x==1)
	{
		cout<<"End";
		return;
	}
	if(x%2==0)
	{
		cout<<x;
		cout<<"/2=";
		cout<<x/2;
		cout<<endl;
		fun(x/2);
	}
	if(x%2!=0)
	{
		cout<<x;
		cout<<"*3+1=";
		cout<<x*3+1;
		cout<<endl;
		fun(x*3+1);
	}
}
int main()
{
	long long a;
	cin>>a;
	if(a==0)
	{
		cout<<"End";
		return 0;
	}
	fun(a);
    return 0;
}

