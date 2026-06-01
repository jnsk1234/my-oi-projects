#include<iostream>
using namespace std;
int gcd(int x,int y)
{
	int r=x%y;
	while(r!=0){
		x=y;
		y=r;
		r=x%y;
	}
	return y;
}
int lcm(int x,int y)
{
	return x*y/gcd(x,y);
}
int main()
{
	int x,y;
	cin>>x>>y;
	cout<<lcm(x,y)<<endl;
	return 0;
}
