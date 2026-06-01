#include<bits/stdc++.h>
using namespace std;
int c[1005],n,x,sc;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		c[x]++;
	}
	
	for(int i=0;i<=1000;i++)
	{
		if(c[i]>0)
		{
			sc++;
		}
	}
	cout<<sc<<endl;;
	for(int i=0;i<=1000;i++)
	{
		if(c[i]>0)
		{
			cout<<i<<endl;
		}
	}
    return 0;
}

