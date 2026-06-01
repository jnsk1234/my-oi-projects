#include<bits/stdc++.h>
using namespace std;
int n,cnt;
struct A{
	int a;
	int b;
}a[1000000];
bool cmp(A a,A b)
{
	return a.b<b.b;
}
int main()
{
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].a>>a[i].b;	
	}
	sort(a,a+n+1,cmp); 
	int end=0;
	for(int i=1;i<=n;i++)
	{
		if(end<=a[i].a)
		{
			end=a[i].b;
			cnt++;
		}
	}
	cout<<cnt;
    return 0;
}

