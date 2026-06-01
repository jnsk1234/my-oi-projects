#include<bits/stdc++.h>
using namespace std;
bool cmp(Student a,Student b)
{
	return a.total<b.total;
}
struct Student
{
	char name[11];
	int chinese;
	int math;
	int total;
}
Student a[100];
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
	for(int i=0;i<n;i++)
	{
		cout<<a[i].name<<' '<<a[i].chinese<<' '<<a[i].math<<' '<<a[i].total<<endl;
	}
}
