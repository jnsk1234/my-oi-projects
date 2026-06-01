#include<iostream>
using namespace std;
const int N=100;
char s1[N+1];
char s2[N+1];
int strcmp(char s1[],char s2[]);
int main()
{
	cin.getline(s1,N+1);
	cin.getline(s2,N+1);
	cout<<strcmp(s1,s2)<<endl;
}
int strcmp(char s1[],char s2[])
{
	int result=0;
	int i=0;
	while(true){
		if((s1[i]==0)&&(s2[i]==0)){
			result=0;
			break;
		}
		if((s1[i]==0)&&(s2[i]!=0))
		{
			result=-1;
			break;
		}
		if((s1[i]!=0)&&(s2[i]==0))
		{
			result=1;
			break;
		}
		if(s1[i]<s2[i])
		{
			result=-1;
			break;
		}
		if(s1[i]>s2[i])
		{
			result=1;
			break;
		}
		i++;
	}
	return result;
}
