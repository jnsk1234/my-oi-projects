#include<iostream>
#include<cstring>
using namespace std;
const int N=100;
int main()
{
	char s1[N+1]="";
	char s2[2*N+1]="";
	cin.getline(s1,N+1);
	cin.getline(s2,N+1);
	if(strstr(s1,s2)!=NULL)
	{
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
