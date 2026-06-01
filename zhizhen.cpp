#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int b=100;
	int *p1=&a;
	int *p2=&b;
	cout<<a<<'\t'<<b<<endl;
	cout<<*p1<<'\t'<<*p2<<endl;
	return 0;                                                  
}
