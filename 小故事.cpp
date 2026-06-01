#include<bits/stdc++.h>
using namespace std;
int a1[1000]={0,1},len=1;
int n; 
void chen(int n)
{
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=len;j++)
		{
			a1[j]*=2;
		}
		for(int j=1;j<=len;j++)
		{
			if(a1[j]>=10)
			{
				a1[j+1]+=a1[j]/10;
				a1[j]%=10;
			}
		}
		if(a1[len+1]>0) len++;
	}
	for(int i=len;i>=1;i--)
	{
		cout<<a1[i];
	}
	
}
int main()
{
	cin>>n;
	chen(n);
    return 0;
}
/*
2^(n-1)
*/
