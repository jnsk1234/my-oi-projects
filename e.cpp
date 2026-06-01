#include<iostream>
using namespace std;
int main()
{
	int s[101];
	int n,z;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(s[j]>s[j+1])
			{
				swap(s[j],s[j+1]);
			}
		 } 
	}
	for(int i=0;i<n;i++)
	{
		cout<<s[i]<<' ';
	}
    return 0;
}

