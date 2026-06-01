#include<iostream>
#include<cmath>
const int N=1000;
bool a[N+1];
using namespace std;
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
			for(int j=2;j<=n;j++){
				//TODO
				a[i*j]=true;
			}
			//TODO
		}
		//TODO
	}
	for(int i=2;i<=n;i++){
		if(a[i])
		{
			cout<<i<<' ';
		}
		//TODO
	}
	return 0;
}
