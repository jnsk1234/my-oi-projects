#include<bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
	int n;
	cin>>n;
	int s;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cin>>s;
	double cnt=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==s)
		{
			cnt++;
		}
	}
	
	printf("%.2f",cnt/n);
    return 0;
}

