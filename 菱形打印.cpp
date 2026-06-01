#include<iostream>
using namespace std;
int main()
{
	int n;
	char ch;
	cin>>n>>ch;
	for(int i=1;i<=n;i++){
		for(int j=1;i<=n-i;j++){
			cout<<' ';
		}
		for(int j=i;j<=2*i-1;j++){
			cout<<ch;
			//TODO
		}
		cout<<endl;
	}
	for(int i=n-i;i>=1;i--){
		//TODO
		for(int j=i;j<n;j++){
			cout<<' ';
			//TODO
		}
		for(int j=2*i-1;j>0;j--){
			//TODO
			cout<<ch;
		}
		cout<<endl;
	}
	return 0;
}
