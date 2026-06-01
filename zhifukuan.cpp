#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	string s[10];
	for(int i=0;i<=10;i++){
		//TODO
		getline(cin,s[i]);
	}
	sort(s,s+10);
	for(int i=0;i<=10;i++){
		//TODO
		cout<<s[i]<<endl;
	}
	return 0;
}
