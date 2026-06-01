#include<iostream>
using namespace std;
int main()
{
	for(int i=100;i<=999;i++){
		if(i%17==0)
		{
			cout<<i;
			break;
		}
	}
	return 0;
}
