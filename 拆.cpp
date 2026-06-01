#include<iostream>
using namespace std;
int main()
{
	int n;
	int a;
	int b;
	int c;
	cin>>n;
	a=n/100;
	b=n/10%10;
	c=n%10;
	int maxx=a;
	if(maxx<b)
	{
		maxx=b;
	}
	if(maxx<c)
	{
		maxx=c;
	}
	cout<<maxx;
	return 0;

	
}
