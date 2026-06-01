#include<iostream>
#include<cmath>
using namespace std;
bool zs(int n)
{
	bool s=true;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			s=false;
			break;
		}
	}
	return s;
}
int main()
{
	int n;
	cin>>n;
	cout<<zs(n);
}
