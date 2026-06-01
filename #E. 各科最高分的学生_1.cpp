#include<bits/stdc++.h>
using namespace std;
struct A {
	string name;
	int c;
	int m;
	int e;
} a[1005];
int ac=0,am=0,ae=0;
string sc,sm,se;
int n;
int main() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i].name>>a[i].c>>a[i].m>>a[i].e;
	}
	sc=a[1].name,sm=a[1].name,se=a[1].name;
	for(int i=1;i<=n;i++)
	{
		if(a[i].c>ac)
		{
			ac=a[i].c;
			sc=a[i].name;
		}
		if(a[i].m>am)
		{
			am=a[i].m;
			sm=a[i].name;
		}
		if(a[i].e>ae)
		{
			ae=a[i].e;
			se=a[i].name;
		}
	}
	cout<<ac<<' '<<sc<<endl;
	cout<<am<<' '<<sm<<endl;
	cout<<ae<<' '<<se<<endl;
	return 0;
	
}
