#include<bits/stdc++.h>
using namespace std;
int a[105];
int m;
int n;
int sc;
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	cin>>n;
	cin>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	
	for(int i=1;i<=n;i++)
	{
		m-=a[i];
		sc++;
		if(m<=0)
		{
			cout<<sc;
			return 0;	
		}
	}
	cout<<"cannot save";
    return 0;
}

