#include<iostream>
using namespace std;
int gcd(int,int);
void reduction(int&,int&,int);
int main()
{
	int a,b;
	cin>>a>>b;
	int m=gcd(a,b);
	reduction(a,b,m);
	cout<<a<<' '<<b<<endl;
	return 0;
	
}
void reduction(int &x,int&y,int m)
{
	x/=m;
	y/=m;
}
int gcd(int m,int n)
{
	int r=0;
    do
	{
		r=m%n;
		m=n;
		n=r;
		
	}while(r!=0);
	return m;
}
