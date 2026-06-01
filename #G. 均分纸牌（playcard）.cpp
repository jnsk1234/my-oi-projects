#include<bits/stdc++.h>
using namespace std;
int a[105];
int n;
int sum; 
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum+=a[i]; 
	}
	sum/=n;
	
    return 0;
}

