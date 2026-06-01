#include<bits/stdc++.h>
using namespace std;
int t,h,m,r,a[2005];
void sort(int n)
{
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			if(t==1)
			{
				if(a[j]>a[j+1])
				{
					swap(a[j],a[j+1]);
				}
			} 
			if(t==2)
			{
				if(a[j]<a[j+1])
				{
					swap(a[j],a[j+1]);
				}
			} 
		}
	}
}
int main()
{
	cin>>h>>m;
	for(int i=1;i<=h;i++)
	{
		cin>>a[i];
	}
	while(m--)
	{
		cin>>t>>r;
		sort(r);
	}
	for(int i=1;i<=h;i++)
	{
		cout<<a[i]<<' ';
	}
    return 0;
}

