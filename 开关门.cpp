#include<iostream>
#include<cmath>
using namespace std;

const int N=1000;
bool a[N+1];
int main()
{
	int n;
	cin>>n;
	for(int i=2;i<=n;i++){
		//TODO
		a[i]=true;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(a[i]){
			for(int j=2;j<=n/j;j++){
				//TODO
				a[i*j]=false;
			}
			//TODO
		}
		//TODO
	}
	for(int i=2;i<=n;i++){
		if(a[i]){
			cout<<i<<endl;
			//TODO
		}
		//TODO
	}
	return 0;
}
