#include<iostream>
#include<cstring>
using namespace std;
struct Date{
	int year;
	int month;
	int day;
};
struct Person{
	char name[11];
	Date birthday;
};
int main()
{
	Person p;
	strcpy(p.name,"Xiaozhi");
	p.birthday.year=2017;
	p.birthday.month=12;
	p.birthday.day=8;
	cout<<p.name<<' '<<p.birthday.year<<' '<<p.birthday.month<<" "<<p.birthday.day<<endl;
    return 0;
}

