#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<n<<"=";
	int i=2;
	do{
		while(n%i==0){
			cout<<i;
			n/=i;
			if(n!=1)
			{
				cout<<"*";
			}
		}
		i++;
	}while(n!=1);
	return 0;
}
