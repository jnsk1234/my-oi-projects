#include<bits/stdc++.h>
using namespace std;
long long a1,a2,d,n;
long long ans; 
int main()
{
	cin>>a1>>a2>>n;
	d=a2-a1;
	ans=n*a1+n*(n-1)*d/2;
	cout<<ans;
    return 0;
}

