#include<iostream>
using namespace std;
int gcd(int m,int n)
{
	int r=m%n;
	while(r!=0){
		//TODO
		m=n;
		n=r;
		r=m%n;
	}
	return n;
}
int lcm(int m,int n)
{
	return m*n/gcd(m,n);
}
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<lcm(m,n)<<endl;
	return 0;
}
