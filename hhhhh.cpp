#include<iostream>
using namespace std;

int jc(int n)
{
	int p=1;
	for(int i=1;i<=n;i++)
	{
		p=p*i;
	}
	return p;
}
int main()
{
	int h=0;
	for(int i=1;i<=10;i++)
	{
		h+=jc(i);
	}
	cout<<h;
	return 0;
}
