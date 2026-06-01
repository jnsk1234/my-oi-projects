#include<iostream>
using namespace std;
int main()
{
	char grade;
	cin>>grade;
	switch (grade) {
		case 'A':
			//TODO
			cout<<"优秀"<<endl;
			break;
		case 'B':
			cout<<"通过"<<endl;
			//TODO
			break;
		case 'C':
			cout<<"及格"<<endl;
			break;
		case 'D':
			cout<<"不及格"<<endl;
			break;
		default:
			//TODO
			cout<<"缺考"<<endl;
			break;
	}
	return 0;
}
