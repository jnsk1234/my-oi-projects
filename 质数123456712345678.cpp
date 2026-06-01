#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	for(int i=100;i<=200;i++){
		bool s=false;
		int n=floor(sqrt(i));
		for(int j=0;j<=n;j++){
			if(i%j==0){
				s=true;
				break;
			}
			if(!s){
				cout<<i<<" ";
			}
		}
	}
	return 0;
}
