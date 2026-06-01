#include<iostream>
using namespace std;
int main()
{
	char c;
	cin>>c;
	if(c>='A'&&c<='Z'){
		c=c-'A'+'a';
		//TODO
	}else{
		c=c-'a'+'A';
	}
	cout<<c<<endl;
	
	return 0;
}
