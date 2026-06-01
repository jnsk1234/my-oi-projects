#include<bits/stdc++.h>
using namespace std;
int s[105],n;
int main()
{
	cin>>n;
	int min=1000;
	int max=0;
	int zs=0,zjs=0;
	
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
		
	}
	for(int i=1;i<=n;i++)
	{
		if(s[i]<=min)
		{
			min=s[i];
		}
		if(s[i]>max)
		{
			max=s[i];
			
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(s[i]==min)
		{
			zjs+=s[i];
		}
		
		
	}
	zjs+=max; 
	for(int i=1;i<=n;i++)
	{
		zs+=s[i];
		
	}
	cout<<zjs<<endl<<zs-zjs;
    return 0;
}
