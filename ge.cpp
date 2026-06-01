#include<bits/stdc++.h>
using namespace std;
unsigned long long d;
int T,n;
string s;
stack<unsigned long long>st;
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	cin>>T;
	while(T--) {
		cin>>n;
		while(!st.empty())st.pop();//Çå¿Õ
		for(int i=1; i<=n; i++) {
			cin>>s;
			if(s=="push") {
				cin>>d;
				st.push(d);
			} else if(s=="query") {
				if(!st.empty())cout<<st.top()<<endl;
				else cout<<"Auguei!\n";
			} else if (s=="size"){
				cout<<st.size()<<endl;
			} else {
				if(!st.empty())
					st.pop();
				else 
					 cout<<"Empty\n";
			}
		}
	}
}

