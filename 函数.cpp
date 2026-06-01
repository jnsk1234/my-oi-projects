#include<iostream>
using namespace std;
int gcd(int m,int n)
{
	int r=m%n;
	if(r!=0)
	{
		m=n;
		n=r;
		r=m%n;
	}
	return n;
}
int lum(int m,int n)
{
	return m*n/gcd(m,n);
}
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<lum(m,n)<<endl;
	return 0;
}
