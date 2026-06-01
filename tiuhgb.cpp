#include<iostream>
using namespace std;
int main()
{
	for(char i='a';i<='z';i+=2)
	{
		cout<<i<<" ";
		
	}	
	cout<<endl;
	for(char i='z';i>='a';i-=2)
	{
		cout<<i<<' ';
	}
	return 0;
} 
