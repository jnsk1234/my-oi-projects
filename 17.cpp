#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=2;i<n;i++){
		if(n%i==0){
			cout<<"NOT PRIME"<<endl;
			break;
		}
		else{
			cout<<"PRIME"<<endl;
			break;
		}
	}
	return 0;
}
