#include<iostream>
using namespace std;
const int N=100;
char s1[N+1];
char s2[N+1];
bool strstr(char s1[],char s2[]);
int strlen(char s[]);
int main()
{
	cin.getline(s1,N+1);
	cin.getline(s2,N+1);
	if(strstr(s1,s2))
	{
		cout<<"Yse";
	}
	else{
		cout<<"No";
	}
}
int strlen(char s[])
{
	int lenget=0;
	for(int i=0;s[i]!=0;i++)
	{
		lenget=i+1;
	}
	return lenget;	
}
bool strstr(char s1[],char s2[])
{
	int l1=strlen(s1);
	int l2=strlen(s2);
	bool found=false;
	for(int i=0;i<=l1;i++)
	{
		bool ok=true;
		for(int j=0;j<l2;j++){
			if(s1[i+j]!=s2[j])
			{
				ok=false;
				break;
			}
		}
		if(ok)
		{
			found=true;
			break;
		}
	}
	return found;
}
