#include<bits/stdc++.h>
using namespace std;
set<long long> a;
long long n,x,s,ans,l;
int main() {
	cin>>n;
	cin>>x;
	for(int i=1; i<=n; i++) {
		cin>>s;
		a.insert(s);
	}
	for(auto i:a) {
		if(i<x){
			ans+=i-l;
			l=i+1;
		}else if(i==x)
		{
			ans++;
		}
	}
	ans+=x-l;
	cout<<ans;
	return 0;
}


