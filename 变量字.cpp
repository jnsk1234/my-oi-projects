#include<iostream>
using namespace std;

int main()
{
	int x=7;
	int y=8;
	int z1=y-(x++);
	int z2=y-(++x);
	cout<<z1<<endl<<z2;
	return 0;
	
	
}
