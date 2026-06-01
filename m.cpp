#include<iostream>
using namespace std;
bool zs(int n)
{
	bool s=1;
	if(n<2)
	{
		s=0;
	}
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			s=0;
		}
	}
	return s;
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

