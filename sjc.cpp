#include<iostream>
using namespace std;
int main()
{
	int a;
	char ch;
	cin>>a>>ch;
    for(int i=0;i<a;i++)
    {
    	cout<<ch;
	}
	cout<<endl;
	for(int i=0;i<a-2;i++)
	{
		cout<<ch;
		for(int j=0;j<a-2;j++)
		{
			cout<<' ';
		}
		cout<<ch;
		cout<<endl;
	}
	
	for(int i=0;i<a;i++)
    {
    	cout<<ch;
	}
}
