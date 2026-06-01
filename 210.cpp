#include<iostream>
#include<cstring>
using namespace std;
char s[100];
int a(char s[]);
int main()
{
	int r;
	cin>>s;
	int f=a(s);
	cout<<f;
    return 0;
}
int a(char s[])
{
	int n=0;
	int w=1;
	for(int i=strlen(s)-1;i>=0;i--)
	{
		if((s[i]>='0')&&(s[i]<='9'))
		{
			n+=(s[i]-'0')*w;
		 } 
		 else{
		 	n+=(s[i]-'A')*w;
		 }
		 w*=2;
	}
	return n;
}

