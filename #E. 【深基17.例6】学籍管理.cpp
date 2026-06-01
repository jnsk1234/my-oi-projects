#include<bits/stdc++.h>
using namespace std;
map <string,int> a;
string s;
int n,x,fs;
int main() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>x;
		if(x==1) {
			cin>>s>>fs;
			a[s]=fs;
			cout<<"OK"<<endl;
		}
		if(x==2) {
			cin>>s;
			if(a.count(s)) {
				cout<<a[s]<<endl;
			} else {
				cout<<"Not found"<<endl;
			}
		}
		if(x==3) {
			cin>>s;
			if(a.count(s)) {
				a.erase(s);
				cout<<"Deleted successfully"<<endl;
			} else {
				cout<<"Not found"<<endl;
			}
		}
		if(x==4)
		{
			cout<<a.size()<<endl;
		}
	}


	return 0;
}//MFTT9LD

