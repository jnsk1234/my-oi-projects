#include<bits/stdc++.h>
int n,s[1005];
using namespace std;
int main()
{
	cin>>n;
	int x;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		s[x]++; 
	}
	for(int i=1;i<=1000;i++)
	{
		if(s[i]%2!=0)
		{
			cout<<i;
			break;
		}
	}
    return 0;
}

