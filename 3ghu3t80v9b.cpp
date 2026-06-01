#include<iostream>
using namespace std;
const int N=100;
char s[N+1];
int strlen(char s[]);
int main()
{
	cin.getline(s,N+1);
	int length=strlen(s);
	cout<<length<<endl;
	return 0;
}
int strlen(char s[])
{
	int length=0;
	for(int i=0;s[i]!=0;i++){
		length=i+1;
	}
	return length;
}
