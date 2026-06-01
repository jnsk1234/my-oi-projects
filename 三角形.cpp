#include<iostream>
using namespace std;
int main()
{
	int n;
	char ch;
	cin>>n>>ch;
	for(int i=1;i<=n;i++){
		//TODO
		for(int j=1;j<=n-i+1;j++){
			//TODO
			cout<<' ';
		}
		for(int j=1;j<=2*i-1;j++){
			//TODO
			cout<<ch;
		}
		cout<<endl;
	}
	return 0;
}
