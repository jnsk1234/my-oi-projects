#include<bits/stdc++.h>
using namespace std;
long long ans,num,x;
stack <long long> a;
string s;
char o='+';
int main() {
	cin>>s;
	for(int i=0; i<=s.size(); i++) {
		if (isdigit(s[i])) {
			num = num * 10 + (s[i] - '0');
		} else if(!isdigit(s[i])||i == s.size() - 1) {
			if(o=='+') {
				a.push(num);
			} else if(o=='*') {
				{
					x=a.top();
					a.pop();
					x*=num;
					a.push(x);
				}
			}
			o=s[i];
			num=0;
		}
	}
	while(a.size()!=0) {
		ans+=a.top();
		a.pop();
	}
	
	cout<<ans%10000;
	return 0;
}

