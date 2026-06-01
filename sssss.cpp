#include<iostream>
using namespace std;
const int N=1000;
bool a[N+1];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j%i==0)
			{
				a[j]=!a[j];
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i])
		{
			cout<<i<<' ';
		}
	}
}
