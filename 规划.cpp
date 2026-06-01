#include<iostream>
#include<cmath>
using namespace std; 
double s(double a,double b,double c)
{

	double p,s;
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}
int main()
{
	double b1,b2,b3,b4,b5,b6,b7;
	cin>>b1>>b2>>b3>>b4>>b5>>b6>>b7;
	double g=s(b1,b5,b6)+s(b2,b6,b7)+s(b3,b4,b7);
	cout<<g;
}
