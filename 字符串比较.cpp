#include<iostream>
#include<cstring>
using namespace std;
const int N=100;
int main()
{
	char s1[N+1]=" ";
	char s2[N+1]=" ";
	cin.getline(s1,N+1);
	cin.getline(s1,N+1);
	cout<<strcmp(s1,s2)<<endl;
	return 0;
}
