#include<bits/stdc++.h>
int n,c,id,a[105];
using namespace std;
int main()
{
	cin>>n>>c;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++)
	{
		n-=a[i];
		id++;
		if(n==0)
		{
			cout<<id;
		}
		else if(n<0)
		{
			cout<<id-1;
			return 0;
		}
		
	}
    return 0;
}

