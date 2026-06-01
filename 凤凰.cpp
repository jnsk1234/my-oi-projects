#include<iostream>
using namespace std;
int main()
{
	int a1;
	int a2;
	int a3;
	int a4;
	int a5;
	int t;
	int n;
	int d;
	cin>>a1>>a2>>a3>>a4>>a5;
	d=a1+a2+a3+a4+a5;
	a2=a2+a1/3;
	a1/=3;a2+=a1;a5+=a1;
	a2/=3;a3+=a2;a1+=a2;
	a3/=3;a4+=a3;a2+=a3;
	a4/=3;a5+=a4;a3+=a4;
	a5/=3;a1+=a5;a4+=a5;
	t=a1+a2+a3+a4+a5;
	cout<<a1<<' '<<a2<<' '<<a3<<' '<<a4<<' '<<a5<<endl;
	cout<<d-t;
	return 0;
}
