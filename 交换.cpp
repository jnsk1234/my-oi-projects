#include<iostream>
#include<cstring>
using namespace std;
const int N=100;
char s1[N+1];
char s2[N+1];
char s[N+1];
int main()
{
	cin.getline(s1,N+1);
	cin.getline(s2,N+1);
	strcpy(s,s1);
	strcpy(s1,s2);
	strcpy(s2,s);
	cout<<s1<<endl;
	cout<<s2<<endl;
	return 0;
}
