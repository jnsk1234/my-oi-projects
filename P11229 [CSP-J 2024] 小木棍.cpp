#include<bits/stdc++.h>
using namespace std;
int n,t;
int main() {
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	cin>>t;
	while(t--) {
		cin>>n;
		int q=n%7;
		if(q==0) {
			q=n/7;
			while(q--) {
				cout<<'8';
			}
			cout<<endl;
		} else if(q==1) {
			if(n==1) {
				cout<<"-1";
			} else {
				cout<<"10";
				q=(n-8)/7;
				while(q--) {
					cout<<'8';
				}
			}
			cout<<endl;
		} else if(q==2) {
			cout<<1;
			q=(n-2)/7;
			while(q--) {
				cout<<'8';
			}
			cout<<endl;
		} else if(q==3) {
			if(n==3) {
				cout<<7;
			} else if(n==10) {
				cout<<22;
			} else {
				cout<<"200";
				q=(n-17)/7;
				while(q--) {
					cout<<'8';
				}
			}
			cout<<endl;
		} else if(q==4) {
			if(n==4) {
				cout<<'4';
			} else {
				cout<<"20";
				q=(n-11)/7;
				while(q--) {
					cout<<'8';
				}
			}
			cout<<endl;
		} else if(q==5) {
			cout<<2;
			q=(n-5)/7;
			while(q--) {
				cout<<'8';
			}
			cout<<endl;
		} else if(q==6) {
			cout<<'6';
			q=(n-6)/7;
			while(q--) {
				cout<<'8';
			}
			cout<<endl;
		}
	}
	return 0;
}
/*
0 6
1 2
2 5
3 5
4 4
5 5
6 6
7 3
8 7
9 6
*/
