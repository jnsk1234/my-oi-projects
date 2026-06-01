#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s="hello, world";
	s.replace(7,6,"xz");
	cout<<s<<endl;
	s.replace(7,3,"xiaozhi",6);
	cout<<s<<endl;
	s.replace(7,6,3,'z');
	cout<<s<<endl;
	return 0;
}
