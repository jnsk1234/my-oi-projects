#include<iostream>
using namespace std;
int main()
{
	int a;
	char b;
	cin>>a>>b;
	for(int i=0;i<a;i++)
	{
		for(int j=1;j<=i;j++)
			cout<<b;
		cout<<endl;
	}
	for(int i=a-1;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<b;
		}
		cout<<endl;
	}
}
