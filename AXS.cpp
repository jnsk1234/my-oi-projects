#include<bits/stdc++.h>
using namespace std;
int n[105];
int main()
{
	int m;
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>n[i];
	}
	for(int i=3;i<=m-2;i++)
	{
		if((n[i]<n[i-1])&&(n[i]<n[i+1])&&((n[i]<n[i-2])&&(n[i]<n[i+2])))
		{
			cout<<n[i]<<endl;
		}
	}
    return 0;
}
