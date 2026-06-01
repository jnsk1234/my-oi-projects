#include<iostream>
#include<cstring>
using namespace std;
char s[50];
int a(char s[],int r); 
int main()
{
	int r;
	cin>>s>>r;
	int f=a(s,r);
	cout<<f;
    return 0;
}
int a(char s[],int r)
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
			n+=(s[i]-'A'+10)*w;
		}
		w*=r;
	}
	return n;
	
}

