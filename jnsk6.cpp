#include<bits/stdc++.h>
using namespace std;
int n=10,os=1,x,js=1;
int a[11];//Å¼Êý 
int b[11];//ÆæÊý 
int main()
{
	for(int i=1;i<=n;i++)
	{
		
		cin>>x;
		if(x%2==0)
		{
			b[js]=x;
			js++;
			
		}else{
			
			a[os]=x;
			os++;
		}
	}
	
	
	for(int i=1;i<js;i++)
	{
		for(int j=1;j<js;j++)
		{
			if(b[i]<b[j])
			{
				swap(b[i],b[j]);
			}
		}
	}
	for(int i=1;i<os;i++)
	{
		for(int j=1;j<os;j++)
		{
			if(a[i]>a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
	
	for(int i=1;i<os;i++)
	{
		cout<<a[i]<<" ";
	}
	for(int i=1;i<js;i++)
	{
		cout<<b[i]<<' ';
	}
	
}

