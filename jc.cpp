#include<iostream>
#include<cmath>
using namespace std;
double a(double a,double b,double c)
{
	double p;
	p=(a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main()
{
	double b1,b2,b3,b4,b5,b6,b7;
	cin>>b1>>b2>>b3>>b4>>b5>>b6>>b7;
	double h;
	h=a(b1,b5,b6)+a(b2,b7,b6)+a(b3,b4,b7);
	cout<<h;
}
