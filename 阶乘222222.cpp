#include<iostream>
using namespace std;
int a(int n);
int main()
{
	int sum;
	for(int i=1;i<=10;i++){
		//TODO
		sum+=a(i);
	}
	cout<<sum;
}
int a(int n)
{
	int p=1;
	for(int i=1;i<=n;i++){
		//TODO
		p*=i;
	}
	return p;
}
