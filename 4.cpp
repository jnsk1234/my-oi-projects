#include<bits/stdc++.h>
using namespace std;
int a[1005];
int n;

int main() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}

	for(int i=1; i<n; i++) {
		for(int j=1; j<n; j++) {
			if(a[j]<a[j+1]) {
				swap(a[j],a[j+1]);
			}
		}
	}
	double s=0;
	for(int i=1; i<=5; i++) {
		s+=a[i];
	}
	printf("%.1f",s/5);
	return 0;
}

