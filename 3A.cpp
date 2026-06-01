#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int k_[105];
struct A{
	int a;
	int b; 
}a[205];
bool cmp(A a,A b)
{
	return a.a>b.a;
}
int main()
{
	cin>>n>>m>>k;
	for(int i=1;i<=k;i++)
	{
		cin>>k_[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].a>>a[i].b;
	}
	sort(a,a+n+1,cmp)
	for(int i=1;i<=m;i++)
	{
		a[i].a;
	}

    return 0;
}

