#include<bits/stdc++.h>
using namespace std;
int a[1005],n;
bool cmp(int a,int b) {
	return a>b;
}
int main() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1; i<=n; i++) {
		if(a[i]%2!=0) {
			cout<<a[i]<<' ';
			break;
		}
	}
	for(int i=1; i<=n; i++) {
		if(a[i]%2==0) {
			cout<<a[i]<<endl;
			break;
		}
	}
	sort(a+1,a+n+1);
	for(int i=1; i<=n; i++) {

		cout<<a[i]<<' ';
	}
	return 0;

}
/*
5
3 8 9 1 6
*/
