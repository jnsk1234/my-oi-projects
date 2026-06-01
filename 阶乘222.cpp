#include<iostream>
using namespace std;
int a(int n);
int main()
{
	int mun=0;
	for(int i=1;i<=10;i++){
		//TODO
		mun+=a(i);
	}
	cout<<mun;
	return 0;
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
