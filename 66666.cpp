#include<bits/stdc++.h>
using namespace std;
int a[20005],n,sc;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n-1;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				sc++;
			}
		}
	}
	cout<<sc;
    return 0;
}

