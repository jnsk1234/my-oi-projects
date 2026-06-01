#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n=1;
	double pi=0;
	int s=1;
	while(1.0/n>1e-8)
	{
		double v=1.0/n;
		pi+=s*v;
		s*=-1;
		n+=2;
	}
	cout<<fixed<<setprecision(10)<<(pi*4)<<endl;
	return 0;
	
}
