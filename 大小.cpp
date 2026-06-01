#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char c;
	cin>>c;
	char c1=toupper(c);
	char c2=tolower(c);
	cout<<c1<<' '<<c2;
	return 0;
}
