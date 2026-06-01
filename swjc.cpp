#include<iostream>
using namespace std;
bool check(int,int);
int main()
{
	int n,d;
	cin>>n>>d;
	cout<<check(n,d);
	return 0;
}
bool check(int n,int d)
{
	bool found=false;
	while(n)
	{
		int e=n%10;
		if(e==d)
		{
			found=true;
			break;
		}
		n/=10;
	}
	return found;
}
