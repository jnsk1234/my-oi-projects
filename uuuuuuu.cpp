#include<iostream>
using namespace std;
int main()
{
	int a;
	char d;
	cin>>a>>d;
	for(int i=1;i<=a;i++)
	{
		for(int j=a;j>=i;j--)
		{
			cout<<d;
		}
		cout<<endl;
	}
}
