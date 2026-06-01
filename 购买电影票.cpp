#include<iostream>
using namespace std;
int main()
{
	int n;
	double c;
	int b;
	int a;
	int e;
	cin>>n>>c;
	if(n>1000){
		n+=1000;
		a+=n/500*4;
		if(n%500!=0){
			//TODO
			a+=4;
		}
		//TODO
	}
	if(c=='y')
	{
		a+=5;
	}
	cout<<a<<endl;
	return 0;
	
}
