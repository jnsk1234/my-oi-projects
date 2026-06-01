#include<iostream>
#include<cmath>
using namespace std;
bool p(int n)
{
	int j;
	j=sqrt(n);
	return j*j==n;
}
bool h(int n)
{
	int m=0;
	for(int i=n;i>0;i/=10)
	{
		m=m*10+i%10;
	}
	return n==m;
}
int main()
{
	int m,n;
	cin>>m>>n;
	for(int i=m;i<=n;i++)
	{
		if(p(i))
		{
			cout<<'*';
		}
		cout<<i;
		if(h(i))
		{
			cout<<'@';
		}
		cout<<' ';
	}
}
