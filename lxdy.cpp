#include<iostream>
using namespace std;
int main()
{
	int n;
	char ch;
	cin>>n>>ch;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			//TODO
			cout<<' ';
		}
		for(int j=1;j<=2*i-1;j++){
			//TODO
			cout<<ch;
		}
		cout<<endl;	
	}
	for(int i=n-1;i>=1;i--){
		//TODO
		for(int j=i;j<n;j++){
			//TODO
			cout<<' ';
		}
		for(int j=2*i-1;j>0;j--){
			//TODO
			cout<<ch;
		}
		cout<<endl;
	}
	return 0;
}
