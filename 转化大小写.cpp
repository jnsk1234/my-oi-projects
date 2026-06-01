#include<iostream>
using namespace std;
char dddd(char x);
char ffff(char x);
int main()
{
	char c;
	cin>>c;
	char c1=dddd(c);
	char c2=ffff(c);
	cout<<c1<<' '<<c2<<endl;
	return 0;
}
char dddd(char x)
{
	if(('a'<=x)&&('z'>=x)){
		
		return x-'a'+'A';
		//TODO
	}
	return x;
}
char ffff(char x)
{
	if((x>='A')&&(x<='Z'))
	{
		return x-'A'+'a';
	}
	return x;
}
	
