#include<iostream>
#include<cstring>
using namespace std;
const int N=50;
char s[N];
int convert_to_decimal(char s[],int r);
int main()
{
	int r;
	cin>>s>>r;
	int ans=convert_to_decimal(s,r);
	cout<<ans;
	return 0;
}
int convert_to_decimal(char s[],int r)
{
	int n=0;
	int w=1;
	for(int i=strlen(s)-1;i>=0;i--)
	{
		if((s[i]>='0')&&(s[i]<=9))
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
