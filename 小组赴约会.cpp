#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	switch (num)
	{
		case 1:
		case 3:
		case 5:
			cout<<"NO"<<endl;
			break;
		case 2:
		case 4:
		case 6:
		case 7:
			cout<<"YES"<<endl;
			break;
			
	}
	return 0;
}
