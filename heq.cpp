#include<iostream>
int a(int m,int n)
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
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	int d=a(m,n);
	cout<<m/d<<" "<<n/d;
    return 0;
}
