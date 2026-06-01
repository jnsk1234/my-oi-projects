#include <bits/stdc++.h>
using namespace std;
map <char,vector <int> > m;
int n,x;
string a;
char ans;
int mx=0; 
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x>>a;
		for(auto j:a){
			m[j].push_back(x);
		}	
	}
	for(auto i:m){
		if(mx<i.second.size()){
			mx=i.second.size();
			ans=i.first;
		}
	}
	cout<<ans<<"\n"<<mx<<"\n"; 
	for(auto i:m){
		if(i.first==ans){
			for(auto j:i.second){
				cout<<j<<endl;
			}
			return 0;
		}
	}
	return 0;
}

