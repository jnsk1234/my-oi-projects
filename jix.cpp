#include<iostream>
using namespace std;
int fact(int);
int main()
{
	int m,n;
	cin>>m>>n;
	int result=fact(m)/fact(m-n)/fact(n);
	cout<<result;
	return 0;
}
int fact(int n)
{
	int p=1;
	for(int i=1;i<=n;i++){
		p*=i;
	}
	return p;
}
