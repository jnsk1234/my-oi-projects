#include<iostream>
using namespace std;
bool zs(int n)
{
	bool f=true;
	if(n<2)
	{
		f=0;
	}
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			f=0;
		}
	}
	return f;
}
int main()
{
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		if(zs(i))
		{
			cout<<i<<' ';
		}
	}
    return 0;
}

