#include<iostream>
#include<cmath>
using namespace std;
bool time(int);
int main()
{
	int n;
	cin>>n;
	cout<<time(n);
	return 0;
}
bool time(int x)
{
	if(x<=1)
	{
		return false;
	}
	bool ok=true;
	for(int i=1;i<=sqrt(x);i++){
		//TODO
		if(x%i==0){
			//TODO
			bool ok=false;
			break;
		}
	}
	return ok;
}
