#include<iostream>
using namespace std;
int main()
{
	int cd,n,k,g;
	cin>>cd>>n;
	int a[cd];
	for(int i=0;i<=cd;i++)
	{
		a[i]=1;
	}
	for(int i=0;i<n;i++)
	{
		cin>>k>>g;
		for(int i=k;i<=g;i++)
		{
			a[i]=0;
		}
	}
	int sc=0;
	for(int i=0;i<=cd;i++)
	{
		if(a[i]==1)
		{
			sc++;
		}
	}
	cout<<sc;
    return 0;
}

