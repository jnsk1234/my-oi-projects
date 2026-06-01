#include<iostream>
using namespace std;
int main()
{
	for(int m=100;m<=999;m++){
		int a=m/100;
		int b=(m%100)/10;
		int c=m%10;
		if(a*a*a+b*b*b+c*c*c==m)
		{
			cout<<m<<endl;
		}
		
	}
	return 0;
}
