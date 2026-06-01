#include<bits/stdc++.h>
using namespace std;
int n,m;
int main()
{
	cin>>n>>m;
	vector <int> a(n+5);
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
	}
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<' ';
	}

    return 0;
}

