#include<bits/stdc++.h>
using namespace std;
int a[6];
int s[15];
int s2[15],cnt;
bool cmp(int a,int b) {
	return a>b;
}
int main() {
	for(int i=1; i<=5; i++) {
		cin>>a[i];
	}
	s[1]=a[1]+a[2]+a[3];
	s[2]=a[1]+a[2]+a[4];
	s[3]=a[1]+a[2]+a[5];
	s[4]=a[1]+a[3]+a[4];
	s[5]=a[1]+a[3]+a[5];
	s[6]=a[1]+a[4]+a[5];
	s[7]=a[2]+a[3]+a[4];
	s[8]=a[2]+a[3]+a[5];
	s[9]=a[2]+a[4]+a[5];
	s[10]=a[3]+a[4]+a[5];
	sort(s,s+10+1);
	for(int i=1; i<=10; i++) {
		if(s[i-1]!=s[i]) {
			s2[i]=s[i];
			cnt++;
		}
	}
	sort(s2,s2+10+1,cmp);
	cout<<s2[2];
	return 0;
}

