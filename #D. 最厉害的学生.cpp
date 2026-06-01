#include<bits/stdc++.h>
using namespace std;
struct A {
	string name;
	int c;
	int m;
	int e;
} a[1005];
int n;
bool cmp( A a,A b) {
	return a.c>b.c;
}
bool cmp_1(A a,A b) {
	return a.m>b.m;
}
bool cmp_2(A a,A b) {
	return a.e>b.e;
}
int main() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i].name>>a[i].c>>a[i].m>>a[i].e;
	}
	sort(a,a+n+1,cmp);
	cout<<a[0].name<<' '<<a[0].c<<endl;
	sort(a,a+n+1,cmp_1);
	cout<<a[0].name<<' '<<a[0].m<<endl;
	sort(a,a+n+1,cmp_2);
	cout<<a[0].name<<' '<<a[0].e<<endl;
	return 0;
}

