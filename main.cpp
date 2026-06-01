#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int *p1=&a;
	int *p2=&b;
	*p1=10;
	*p2=100;
	cout<<a<<" "<<b<<endl;
	cout<<*p1<<" "<<*p2<<endl;
	return 0;
}
