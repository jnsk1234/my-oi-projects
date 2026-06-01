#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	double r=0;
	for(int i=1; ;i++){
		r+=1.0/i;
		if(r>a)
		{
			cout<<i<<endl;
			break;	
		}
	}
	return 0;
}
