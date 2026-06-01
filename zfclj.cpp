#include<iostream>
#include<cstring>
using namespace std;
const int N=100;
int main()
{
	char s1[N+1]="";
	char s2[N+1]="";
	char s3[2*N+1]="";
	cin.getline(s1,N+1);
	cin.getline(s2,N+2);
	strcpy(s3,s1);
	strcat(s3,s2);
	cout<<s3<<endl;
}
