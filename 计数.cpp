#include<iostream>
using namespace std;
const int N=100;
char s[N+1];
int main()
{
	int length=0;
	char ch;
	while(1){
		//TODO
		cin>>ch;
		if(ch=='.'){
			break;
			//TODO
		}
		s[length]=ch;
		length++;
	}	
	cout<<length<<endl;
	for(int i=0;i<=length;i++){
	//TODO
	cout<<s[i];
	}
	return 0;
	
	
}
