#include<bits/stdc++.h>
using namespace std;
int n,m,maxe,sum;
int a[105];
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n-m+1;i++)
	{
		sum=0;
		sum=a[i]+a[i+1]+a[i+2];
		if(sum>maxe)
		{
			maxe=sum;
		}
	}
	double sc=maxe/n;
	printf("%.2f",sc);
    return 0;
}

