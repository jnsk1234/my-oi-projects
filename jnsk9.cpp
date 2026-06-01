#include<bits/stdc++.h>
using namespace std;
int a[1005],n;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	sort(a+1,a+n+1);
	double b=0.0;
	if(n%2==0)
	{
		b=0.0+a[n/2+1]+a[n/2];
		b=b/2;
	}
	else{
		b=0.0+a[n/2+1]; 
	}
	printf("%.1f",b);
    return 0;
}

