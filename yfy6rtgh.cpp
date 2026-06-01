#include<iostream>
#include<cmath>
using namespace std;
bool qe(int n)
{
	int q=sqrt(n);
	return q*q==n;
}
bool qn(int m)
{
	int w=0;
	for(int i=m;i>0;i/=10){
		//TODO
		w=w*10+i%10;
	}
	return w==m;
}
int main()
{
	int m,n;
	cin>>m>>n;
	
}
