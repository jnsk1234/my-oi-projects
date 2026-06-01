#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	s1="Hi";
	s2=s1;
	cout<<s1<<endl;
	s1+=s2;
	cout<<s1<<endl;
	cout<<s1+s2<<endl;
	cout<<(s1==s2)<<endl;
	cout<<(s1!=s2)<<endl;
	cout<<(s1<s2)<<endl;
	cout<<(s1>s2)<<endl;
	cout<<(s1<=s2)<<endl;
	cout<<(s1>=s2)<<endl;
	
}
