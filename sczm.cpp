#include<iostream>
using namespace std;
int main()
{
	for(char letter='a';letter<='z';letter+=2)
	{
		cout<<letter<<" ";
	}
	cout<<endl;
	for(char letter='z';letter>='a';letter-=2)
	{
		cout<<letter<<' ';
	}
	return 0;
}
