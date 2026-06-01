#include<bits/stdc++.h>
using namespace std;
bool symgs(int s)
{
	int a,b,c,d;
	a=s/1000;
	b=s/100%10;
	c=s/10%10;
	d=s%10;
	int p=0;
	p=pow(a,4)+pow(b,4)+pow(c,4)+pow(d,4); 
	if(s==p)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=n;i<=m;i++)
	{
		if(symgs(i))
		{
			cout<<i<<' ';
		}
	}
    return 0;
}

