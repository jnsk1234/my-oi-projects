#include<iostream>
using namespace std;
int main()
{
	int h;
	cin>>h;
	if (h==0){
		cout<<"12 am"<<endl;
	}
	else if (h<12){
		cout<<h<<"am"<<endl;
	}
	else if (h==12){
		cout<<"12 pm"<<endl;
	}
	else{
		cout<<h-12<<"pm"<<endl;
	}
	return 0;
}
