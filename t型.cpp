#include<iostream>
using namespace std;;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=2*n-1;i++){
		cout<<'*';
	}
	cout<<endl;
	for(int i=0;i<=n;i++){
		for(int i=1;i<=n-1;i++){
			cout<<" ";
		}
		cout<<'*';
		cout<<endl;	
	}
	return 0;
}
