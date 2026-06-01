#include<iostream>
using namespace std;
int main()
{
	bool found=false;
	int x=0;
	do{
		x+=7;
		if((x%2==1)&&(x%3==1)&&(x%4==1)&&(x%5==1)&&(x%6==1))
		{
			found=true;
			
		}
	}while(!found);
	cout<<x;
	return 0;
}
