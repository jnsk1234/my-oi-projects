#include<iostream>
using namespace std;
int main()
{
	int h1,m1,s1,h2,m2,s2;
	cin>>h1>>m1>>s1>>h2>>m2>>s2;
	h1=h1+h2;
	m1=m1+m2;
	s1=s1+s2;
	m1=m1+s1/60;
	s1=s1%60;
	h1=h1+m1/60;
	m1=m1/60;
	h1=h1%24;
	cout<<h1<<":"<<m1<<":"<<s1<<endl;
	return 0;
}
