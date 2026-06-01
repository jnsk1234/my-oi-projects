#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	int gcd=m>n?n:m;
	while(gcd>1&&(m%gcd!=0||n%gcd!=0)){
		//TODO
		gcd--;
	}
	cout<<gcd<<endl;
	return 0;
}
