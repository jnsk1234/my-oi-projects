#include<iostream>
using namespace std;
int main()
{
	int n;
	char ch;
	cin>>n>>ch;
	for(int i=1;i<=n;i++){
		//TODO
		for(int j=1;j<=n-1;j++){
			//TODO
			cout<<' ';
			
		}
		for(int j=i;i<=2*i-1;j++){
			//TODO
			cout<<ch;
		}
		cout<<endl;
		
	}
	for(int i=n-i;i>=1;i--){
		for(int j=i;j<n;j++){
			//TODO
			cout<<' ';
		}
		for(int j=2*n-1;j>1;j++){
			//TODO
		}

	}
}
