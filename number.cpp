//江南 2025 4 27 cz110
#include<bits/stdc++.h>
using namespace std;
string a;
int n,flag=0;
int main() {
	//freopen("number.in","r",stdin);
	//freopen("number.out","w",stdout);
	cin>>a;
	for(int i=0; i<=sizeof(a)/4; i++) {
		if(a[i]=='0')	a[i]='0';
		if(a[i]=='1')	a[i]='1';
		if(a[i]=='2')	a[i]='2';
		if(a[i]=='3')	a[i]='2';
		if(a[i]=='4')	a[i]='2';
		if(a[i]=='5')	a[i]='0';
		if(a[i]=='6')	a[i]='2';
		if(a[i]=='7')	a[i]='2';
		if(a[i]=='8')	a[i]='2';
		if(a[i]=='9')	a[i]='2';
	}

	for(int i=0; i<=sizeof(a)/4; i++) {
		if(a[i]!='0'&&flag==0) {
			flag=1;
		}
		if(flag==1)
			cout<<a[i];
	}
	return 0;
}
/*
样例输入 83
样例输出 22
*/


