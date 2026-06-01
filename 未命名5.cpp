#include<iostream>
using namespace std;
int main()
{
	int time,salary;
	cin>>time;
	switch(time)
	{
		case 1:2:3:4:
			salary=time*18;
			break;
		case 5:6:7:8:
			salary=80+(time-4)*32;
			break;
		case 9:10:11:12:
			salary=80+4*23+(time-8)*30;
		
		
	}
	cout<<salary<<endl;
	return 0;
}
