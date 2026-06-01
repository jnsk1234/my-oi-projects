#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	
	for(int i=100;i<=200;i++){
		//TODO
		bool found=false;
		int n=floor(sqrt(i));
		for(int j=2;j<=n;j++){
			//TODO
			if(i%j==0){
				found=true;
				break;
				//TODO
			}
		}
		if(!found){
			//TODO
			cout<<i<<" ";
		}
	}
	return 0;
}
