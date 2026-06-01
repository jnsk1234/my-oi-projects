#include<iostream>
using namespace std;
int main()
{
	char grade;
	cin>>grade;
	switch (grade) {
		case 'A':
			//TODO
			cout<<"85~100";
			break;
		case 'B':
			cout<<"70~84";
			//TODO
			break;
		case 'C':
			cout<<"60~69";
			break;
		case 'D':
			cout<<"0~60";
			break;
		default:
			//TODO
			break;
			cout<<"error";
	}
	return 0;
}
