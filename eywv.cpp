#include<iostream>
using namespace std;
const int N=100;
char s1[N+1];
char s2[N+1];
void strcpy(char s1[],char s2[]);
int main()
{
	cin.getline(s2,N+1);
	strcpy(s1,s2);
	cout<<s1<<endl;
	cout<<s2<<endl;
	return 0;
}
void strcpy(char s1[],char s2[])
{
	for(int i=0;;i++){
		s1[i]=s2[i];
		if(s2[i]==0)
		{
			break;
		}
	}
}
