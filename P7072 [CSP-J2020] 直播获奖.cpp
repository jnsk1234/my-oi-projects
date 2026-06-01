#include<bits/stdc++.h>
using namespace std;
int n,w;
int c[605];
int x;
int main()
{
	cin>>n>>w;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		c[x]++;
		int l=max(1,i*w/100),num=0;
		for(int j=600;j>=0;j--)
		{
			num+=c[j];
			if(num>=l)
			{
				cout<<j<<' ';
				break;
			}
		}
	}
    return 0;
}

