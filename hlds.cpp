#include<iostream>
using namespace std;
bool zs[100];
int a[100],n;
void isPrime()
{
	for(int i=2;i<=100;i++)
	{
		if(!zs[i])
		{
			a[n++]=i;
		}
		for(int j=0;j<n&&i*a[j]<=100;i++)
		{
			zs[i*a[j]]=true;
			if(i%a[j]==0)
			{
				break;
			}
		}
	}
}
int main()
{
	isPrime();
	for(int i=0;i<n;i++)
	{
		cout<<a[i]
<<' ';	}
    return 0;
}

