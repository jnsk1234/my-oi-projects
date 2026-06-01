#include<iostream>
#include<cmath>
using namespace std;
bool zs(int n)
{
	bool h=1;
	
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			h=0;
		}
	}
	return h;
}
int main()
{
	int n;
	cin>>n;
	if(n==0)
	{
		cout<<0;
	} 
	else{
		cout<<zs(n);
	}
    return 0;
}

