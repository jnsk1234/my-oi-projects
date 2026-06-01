#include<iostream>
using namespace std;
int main()
{
	char s[21];
	int n;
	cin>>s;
	for(int i=0;i<=21;i++)
	{
		if(65<=s[i]>=90)
		{
			n++;
		}
	}
	cout<<n;
}
