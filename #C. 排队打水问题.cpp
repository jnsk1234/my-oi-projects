#include<bits/stdc++.h>
using namespace std;
int n;
int r;
int a[505],cnt;
int main()
{
	cin>>n>>r;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
	{
		if(i<=r)
			cnt+=a[i];
		else{
			a[i]+=a[i-r]; 
			cnt+=a[i];	
		}
	}
	cout<<cnt;
    return 0;
}

