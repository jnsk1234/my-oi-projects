#include<iostream>
using namespace std;
int main()
{
	int n,o,a,sc=0;
	cin>>n;
	int s[101];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	cin>>o;
	for(int i=0;i<n;i++)
	{
		if(s[i]==o)
		{
			a=i;
		}
	}
	for(int i=0;i<a;i++)
	{
		if(s[i]>o)
		{
			sc++;
		}
	}
	cout<<sc;
	
    return 0;
}

