# include <iostream>
#include<algorithm>
using namespace std;
struct Student
{
	char name[11];
	int chinese;
	int math;
	int total;
};
Student a[100];
bool cmp(Student s1,Student s2)
{
	return s1.total>s2.total;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].name>>a[i].chinese>>a[i].math;
		a[i].total=a[i].chinese+a[i].math;
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		//TODO
		cout<<a[i].name<<a[i].chinese<<a[i].math<<a[i].total<<endl;
	}
	return 0;
}
