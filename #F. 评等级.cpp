#include<bits/stdc++.h>
using namespace std;
struct A{
	int a,b,c,d;
}s[1005];
int n;
int main() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>s[i].a>>s[i].b>>s[i].c;
		s[i].d=s[i].b*7+s[i].c*3;
	}
	for(int i=1;i<=n;i++)
	{
		if(s[i].b+s[i].c>140 && s[i].d>=80)
		{
			cout<<"Excellent"<<endl;
		}
		else{
			cout<<"Not excellent"<<endl;
		}
	}
	return 0;
}

