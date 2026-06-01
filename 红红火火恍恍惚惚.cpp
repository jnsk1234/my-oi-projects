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
			cout<<' ';
		}
		for(int z=0;z<i;z++)
		{
			cout<<d;
		}
		cout<<endl;
	}
}
