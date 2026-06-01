#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c;
	d=a;
	a=b;
	b=d;
	d=a;
	a=c;
	c=d;
	cout<<a<<b<<c;
	return 0;
	
}
