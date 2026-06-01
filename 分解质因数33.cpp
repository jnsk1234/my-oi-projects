#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=2;
	do{
		while(n%i==0){
			cout<<i;
			n/=1;
			if(n!=1){
				cout<<"*";
			}
		}
	}while(n=1);
	return 0;
}
