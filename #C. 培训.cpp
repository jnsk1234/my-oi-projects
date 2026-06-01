#include<bits/stdc++.h>
using namespace std;
struct A{
	string name;
	int old;
	int noip;
}a[10];
int n;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].name>>a[i].old>>a[i].noip;
	}
	
	for(int i=1;i<=n;i++)
	{
		cout<<a[i].name<<' '<<++a[i].old<<" "<<min(a[i].noip+(a[i].noip/5),600)<<endl;
	}
    return 0;
}
