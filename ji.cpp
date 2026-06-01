#include<iostream>
using namespace std;
bool jee(int,int);
int main()
{
	int n,d;
	cin>>n>>d;
	cout<<jee(n,d);
	return 0;
}
bool jee(int n,int d)
{
	bool q=false;
	while(n){
		int e=n%10;
		if(e==d)
		{
			q=true;
			break;
		}
		n=n/10;
	}
	return q;
}
