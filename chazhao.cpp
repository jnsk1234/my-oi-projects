#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s="hello, world!";
	string filter=",!";
	cout<<s.find("l",7)<<endl<<string::nops<<endl;
	cout<<s.rfind('lo',7)<<endl;
	cout<<s.find_first_of(filter,2)<<endl;
	cout<<s.find_last_of(filter)<<endl;
	cout<<s.find_first_not_of(filter)<<endl;
	cout<<s.find_last_not_of(filter,100)<<endl;
	return 0;
	
}
