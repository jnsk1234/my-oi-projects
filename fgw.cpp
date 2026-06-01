#include<iostream>
#include<cmath>
using namespace std;

bool zc(int a)
{
	bool d=1;
	for(int i=2;i<sqrt(a);i++)
	{
		if(a%i==0)
		{
			d=0;
			break;
		}
	}
	return d;
 } 
int main()
{
	int d;
	cin>>d;
	if(d==1||d==0)
	{
		cout<<0;
	}
	else
	{
		cout<<zc(d);
	}
    return 0;
}

