#include<iostream>
#include<cstring>
using namespace std;


int main()
{
	int n;
	cin>>n;
	for(int i=n;i>0;i--)
	{
		for(int j=0;j<=i;j++)
			printf(" ");
		
		string q=string(n,'*');
		cout<<q;
		cout<<endl;
	}
}
