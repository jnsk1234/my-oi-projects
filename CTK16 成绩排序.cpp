#include<bits/stdc++.h>
using namespace std;
struct A{

	string name;
	int a,b,c;
	int t;
}a[105];
bool cmp(A a,A b)
{
	if(a.t==b.t)
	{
		return a.name>b.name;
	}
	return a.t>b.t;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].name>>a[i].a>>a[i].b>>a[i].c;
		a[i].t=a[i].a+a[i].b+a[i].c;
	}
//	sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;i++)
	{
		cout<<a[i].name<<' '<<a[i].t<<endl;
	}
	return 0;
}

