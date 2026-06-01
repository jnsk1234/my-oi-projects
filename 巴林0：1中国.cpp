#include<bits/stdc++.h>
using namespace std;
int s[105],n;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	for(int i=1;i<=n;i++)
	{
		int f=0;
		for(int j=1;j<=n;j++)
		{
			if(s[j]>s[i])
			{
				f++;
			}
		}
		cout<<f<<' ';
	}
    return 0;
}

