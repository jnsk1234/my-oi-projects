#include<iostream>
using namespace std;
int main()
{
	int a=1;
	int t=0;
	do{
		t++;
		a=(a*18)%100;
		
	}while(t<2018);
	cout<<a<<endl;
	return 0;
}
