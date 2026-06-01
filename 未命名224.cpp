#include<bits/stdc++.h>
using namespace std;
bool cmp(A a,A b)
{
	return a.a>b.a;
}
struct A{
	int a,b,sum;
}a[1005];
int n,s;
int main()
{
	cin>>n>>s;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].a>>a[i].b;
		a[i].sum=a[i].a+a[i].b;
	}
	sort(a+1,a+n+1,cmp);

    return 0;
}

